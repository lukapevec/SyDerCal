# SyDerCal
Framework for calculation of symbolic derivations

Derivable functions are separated in 3 groups (depended on the number of inputs): 
- nullary functions (0 arguments) 
- unary functions (1 argument)
- binary functions (2 arguments)

# Nullary functions available:
Function implemented | Function call
-------------------- | -------------
Constant (`Const.h`) | `Const()`
Variable (`X.h`) | `X()`

```cpp
// example nullary functions
auto *func = new X();
```

# Unary functions available:
Function implemented | Function call
-------------------- | -------------
Exponential (`Exp.h`) | `Exp()`
Sine (`Sin.h`) | `Sin()`
Cosine (`Cos.h`) | `Cos()`

```cpp
// example unary functions
auto *func = new Exp(new X());
```

# Binary functions available:
Function implemented | Function call | Operator overloading
------------ | ------------- | ------------
Addition (`AddFunction.h`) | `Add()` | `+`
Subtraction (`SubFunction.h`) | `Sub()` | `-`
Multiplication (`MulFunction.h`) | `Mul()` | `*`
Division (`DivFunction.h`) | `Div()` | `/`
Power rule (`PowFunction.h`) | `Pow()` | `^`

```cpp
// example binary functions
auto *funcClasic = (new Exp(new X()))->Sub(new X());
auto *funcOperator = *new Exp(new X()) - new X(); 
```

# Aditional implemented actions
Action implemented | Action call | Operator overloading
------------ | ------------- | ------------
String expresion | `ToString()` | `string()`
Evaluation | `Evaluate()` | `()`
Derivation | `Derive()` | 

## Experimental simplification (experimental):

- [x] 0 + x = x + 0 = x
- [x] x - 0 = x
- [x] 1 * x = x * 1 = x
- [x] x / 1 = x
- [x] x * x = x^2