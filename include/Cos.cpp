
#include "Cos.h"

 Cos::Cos(const DerivableFunction & argument) {
}

string Cos::ToString() const {

  return "cos(" + argument_->ToString() + ")";
}

DerivableFunction Cos::Derive() const {

  return (new Const(-1.0))->Mul(new Sin(argument_));
}

double Cos::Evaluate(double d) const {

  return cos(d);
}

