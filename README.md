# SyDerCal
Framework for calculation of symbolic derivations

#### Objects available:
- Constant (`Const.h`)
- Variable (`X.h`)
- Exponential (`Exp.h`)
- Sine (`Sin.h`)
- Cosine (`Cos.h`)

```objectivec
// example objects
auto *func = new Exp(new X());
```

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

```objectivec
// example functions
auto *funcClasic = (new Exp(new X()))->Sub(new X());
auto *funcOperator = *new Exp(new X()) - new X(); 
```