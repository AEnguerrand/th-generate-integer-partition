# th-generate-integer-partition
Tsinghua Project - Generate the integer partition of number p(n)

## Dependencies

- C++ 14 Compiler
- CMake (>= 3.5)

## Usage:
```bash
./th-generate-integer-partition <number>
```

## Notes
If the number is > 200, variable for results risk an error of overflow or too much usage of memory.

## Build and run
### Linux or MacOs
```bash
git clone https://github.com/AEnguerrand/th-generate-integer-partition.git
cd th-generate-integer-partition
mkdir build
cd build
cmake ..
cmake --build .
./th-generate-integer-partition <number>
```
