# Incorrect Use of delete Operator on Stack-Allocated Variable

This repository demonstrates a common error in C++: attempting to use the `delete` operator on a pointer to a variable allocated on the stack. This leads to undefined behavior and potential crashes.  The `bug.cpp` file shows the erroneous code; `bugSolution.cpp` provides the correction.

**Key Learning:** Understand the difference between stack and heap allocation and the correct usage of `new`/`delete` for heap-allocated memory.