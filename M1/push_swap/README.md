*This project has been created as part of the 42 curriculum by danipere, samsanch.*

# push_swap

## Description

`push_swap` is a sorting project built around a very restricted set of tools: two
stacks (`a` and `b`) and a limited list of operations (`sa`, `sb`, `ss`, `pa`, `pb`,
`ra`, `rb`, `rr`, `rra`, `rrb`, `rrr`). The program receives a list of integers as
arguments, loads them into stack `a`, and must output the shortest possible sequence
of operations needed to sort them in ascending order, using only stack `b` as
temporary storage.

The goal of the project is to explore algorithmic complexity in a hands-on way: not
just sorting a list, but sorting it efficiently under a very restricted operation set,
and choosing between different strategies depending on how disordered the input is.

The program implements four different sorting strategies (an O(n²) strategy, an
O(n√n) strategy, an O(n log n) strategy, and an adaptive strategy that picks between
methods based on a computed "disorder index" of the input), selectable via
command-line flags, plus an optional `--bench` mode that reports statistics about
the sort that was performed.

## Instructions

### Compilation

```sh
make
```

This builds the `push_swap` binary using the project's `Makefile`.

Other available Makefile rules:

```sh
make clean    # remove object files
make fclean   # remove object files and the binary
make re       # fclean + all
```

### Usage

```sh
./push_swap [--simple|--medium|--complex|--adaptive] <list of integers>
```

- If no flag is given, `--adaptive` is used by default.
- The program prints the resulting sequence of operations to `stdout`, one per line.
- If no arguments are given, the program prints nothing and exits.
- On invalid input (non-integer arguments, integer overflow, duplicate values,
  etc.), the program prints `Error` to `stderr`.

Example:

```sh
./push_swap 2 1 3 6 5 8
```

### Movements

The program works with two stacks, `a` and `b`, and can only sort by combining the
following operations:

- **`sa`** — swap the first two elements of stack `a`. Does nothing if `a` has 0
  or 1 elements.
- **`sb`** — swap the first two elements of stack `b`. Does nothing if `b` has 0
  or 1 elements.
- **`ss`** — perform `sa` and `sb` at the same time.
- **`pa`** — take the first element of `b` and push it onto the top of `a`. Does
  nothing if `b` is empty.
- **`pb`** — take the first element of `a` and push it onto the top of `b`. Does
  nothing if `a` is empty.
- **`ra`** — rotate stack `a` up by one: the first element becomes the last.
- **`rb`** — rotate stack `b` up by one: the first element becomes the last.
- **`rr`** — perform `ra` and `rb` at the same time.
- **`rra`** — reverse rotate stack `a`: the last element becomes the first.
- **`rrb`** — reverse rotate stack `b`: the last element becomes the first.
- **`rrr`** — perform `rra` and `rrb` at the same time.

### Sorting strategies

The four required sorting strategies are selected through their respective
command-line flags:

- `--simple`
- `--medium`
- `--complex`
- `--adaptive` (default if no flag is given)

### Benchmark mode

Adding `--bench` sends additional statistics to `stderr` after sorting: the
disorder index of the input, the strategy used and its theoretical complexity
class, and a breakdown of how many operations of each type were used.

```sh
./push_swap --bench 2 1 3 6 5 8 2> bench.txt
cat bench.txt
```

## Algorithms

- **Simple strategy (O(n²)):** Selection-sort style. Repeatedly finds the current
  minimum in `a`, rotates it to the top (`ra`/`rra`, whichever side is shorter),
  and pushes it to `b`. Once `a` is empty, `b` holds the values sorted, so pushing
  everything back to `a` (`pa`) restores it fully sorted.

- **Intermediate strategy (O(n√n)):** Splits the value range into ~√n chunks. Makes
  one full pass over `a` per chunk, pushing to `b` any value that falls within the
  current chunk's range, then moves to the next chunk. Since each of the ~√n
  passes costs O(n), total cost is O(n·√n). A shared `push_back()` helper then
  reinserts `b` into `a` in order (repeatedly extracting the max of `b`, rotating
  it to the top, and pushing it to `a`).

- **Complex strategy (O(n log n)):** Similar in spirit to the intermediate
  strategy, but uses a sliding value "window" of size ~√n instead of scanning `a`
  in full for every chunk, which reduces the number of rotations needed. Values
  are pushed to `b` as soon as they fall within the current window, and `b` is
  rotated to keep it ordered while pushing. `push_back()` is reused to rebuild `a`.

- **Adaptive strategy:** Computes a disorder index for the input (fraction of
  inverted pairs, 0 = sorted, 1 = fully disordered) and picks the strategy above
  that matches the required complexity class for that range:
  - `disorder < 0.2` → simple strategy (O(n))
  - `0.2 ≤ disorder < 0.5` → intermediate strategy (O(n√n))
  - `disorder ≥ 0.5` → complex strategy (O(n log n))

## Resources

- [42 push_swap subject](https://www.42.fr/) — project subject and requirements
- Introduction to Algorithms (CLRS) — general reference on sorting algorithms and
  Big-O complexity
- [Big-O notation overview](https://en.wikipedia.org/wiki/Big_O_notation)
- *(add any additional articles, tutorials, or references you actually used)*

### AI usage

*We can proudly say, no AI was used to do any part of this project except for the README.md, nor research for the algorythims*
