# Simple Calculator

## Compilation

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 calculator.c -o calculator
```

## How to Run

```bash
./calculator
```

## Supported Operations

- Addition
- Subtraction
- Multiplication
- Division

## Numeric Behavior

The calculator uses `double` to support both integer and decimal numbers.

## Known Limitations

- Division by zero is not allowed.
- Complex mathematical operations are not supported.
- Non-numeric input validation is not supported.
