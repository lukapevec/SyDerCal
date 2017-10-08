# SyDerCal
Framework for calculation of symbolic derivations

# Nullary functions available:
- Constant (`Const.h`)
- Variable (`X.h`)

```cpp
// example nullary functions
auto *func = new X();
```

# Unary functions available:
- Exponential (`Exp.h`)
- Sine (`Sin.h`)
- Cosine (`Cos.h`)

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
String expresion | `ToString()` | `string()`
Evaluation | `Evaluate()` | `()`
Derivation | `Derive()` | 

```cpp
// example binary functions
auto *funcClasic = (new Exp(new X()))->Sub(new X());
auto *funcOperator = *new Exp(new X()) - new X(); 
```

## Experimental simplification (experimental):

- [x] 0 + x = x + 0 = x
- [ ] 0 - x = x - 0 = x
- [x] 1 * x = x * 1 = x
- [ ] x / 1 = x
- [ ] x * x = x^2