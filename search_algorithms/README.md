# Search Algorithms Project

## Overview

This project implements two search algorithms: Linear Search and Binary Search. Additionally, it includes an example function for allocating a 2D array. Each algorithm is designed to work with arrays of integers and follows specific requirements, such as adhering to the Betty style and using specific compilation options.

## Project Structure

The project is organized into the following components:

1. `0-linear.c`: Implementation of the Linear Search algorithm.
2. `1-binary.c`: Implementation of the Binary Search algorithm.
3. `search_algos.h`: Header file containing function prototypes.
4. `main.c` (not provided): Example main files for testing the implemented functions.

## Requirements

- Allowed editors: vi, vim, emacs
- Compilation: Ubuntu 20.04 LTS using gcc with options -Wall -Werror -Wextra -pedantic -std=gnu89
- No global variables allowed
- Maximum 5 functions per file
- Only allowed to use the printf function of the standard library
- Header file: `search_algos.h` with include guards
- Push the header file to the repository

## Time and Space Complexity

### Linear Search

- **Time Complexity (worst case):** O(n)
- **Space Complexity (worst case):** O(1)

### Binary Search

- **Time Complexity (worst case):** O(log(n))
- **Space Complexity (worst case):** O(1)

### allocate_map Function

- **Space Complexity (worst case):** O(nm)

## Usage

To test the functions, compile the provided main files with the corresponding implementation files using the specified compilation options. For example:

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 0-main.c 0-linear.c -o linear_search
```

Then `./linear_search`


## Notes

- The provided main files are for testing purposes and may differ from the examples shown.
- Big O notations are used to describe time and space complexity.

## Author

Saleh Shahverdiyev.
