*This activity has been created as part of the 42 curriculum by bdahmoul, chlminga.*

# Push_Swap

Sorting integers with the lowest possible number of operations using two stacks.

## Description

Push_Swap is a 42 project where a list of integers must be sorted using two stacks (`A` and `B`) and a limited set of operations.

The goal is to generate the smallest possible sequence of operations while handling different input sizes efficiently.

The project includes:
- Input parsing and error management.
- Several sorting strategies.
- Automatic strategy selection.
- Benchmark statistics.

---

## Algorithms

Different algorithms are used depending on the input disorder and size.

### Adaptive mode

The default mode analyses the disorder percentage of the stack and selects a strategy automatically.

### Small sort

For 2 or 3 numbers, a dedicated algorithm is used because it produces fewer operations than a general sorting method.

*For the next three algorithms, we chose them based on word-of-mouth recommendations.

### Selection sort (`O(n²)`)

Used for small or almost sorted stacks.
It repeatedly finds the smallest value and moves it to the correct position.

### Chunk sort (`O(n√n)`)

Used for medium disorder.
The stack is divided into chunks to reduce rotations and improve operation count.

### Radix sort (`O(n log n)`)

Used for large or highly disordered stacks.
Values are indexed and sorted bit by bit, providing predictable performance.

Available strategies:
- `--simple`
- `--medium`
- `--complex`
- `--adaptive`


---

## Parsing

The parsing module handles input validation and stack creation.

Features:
- Accepts only valid integers.
- Rejects values outside the `int` range.
- Detects duplicate numbers.
- Displays `Error` for invalid input.

Main files:
- `main.c`: program flow and flags.
- `list.c`: linked list management.
- `number.c`: number validation.
- `check.c`: input checks.
- `split.c`: argument splitting.
- `bench.c`: benchmark output.

---

## Operations

The program uses the allowed Push_Swap operations:

| Operations | Mission |
|:--:|:--:|
|sa (swap a)| Swap the first two elements at the top of stack a |
|sb (swap b)| Swap the first two elements at the top of stack b |
|ss| swap a and swap b at the same time |
|pa (push a)| Take the first element at the top of b and put it at the top of a |
|pb (push b)| Take the first element at the top of a and put it at the top of b |
|ra (rotate a)| Shift up all elements of stack a by one |
|rb (rotate b)| Shift up all elements of stack b by one | 
|rr| rotate a and rotate b at the same time |
|rra (reverse rotate a)| Shift down all elements of stack a by one |
|rrb (reverse rotate b)| Shift down all elements of stack b by one |
|rrr| reverse rotate a and reverse rotate b at the same time |

---

## Benchmark

The `--bench` option displays statistics on `stderr`.

Example:

```bash
./push_swap --bench --adaptive 4 67 3 87 23 2> bench.txt
cat bench.txt

```
# Compilation

- start with : `make`
- add the name of the directory : `./push_swap`
- add the mode : `--simple` , `--medium` , `--complex` , `--adaptative`
- add the test arguments

# Contribution

| Contributor | Responsabilities |
|:--:|:--:|
| chlminga | Operations, algo medium |
| bdahmoul | Parsing, algo simple, complex, benchmark, disorder metric |

## Resources

References:

- Binary number tables:
https://www.qlt.it/wp-content/uploads/2016/10/227-DMX-BIN-DEC.pdf

- Radix Sort explanation:
https://www.growingwiththeweb.com/sorting/radix-sort-lsd/

Peer to peer help : bdahmoul, ahalifa, fgodinho, hortmart.