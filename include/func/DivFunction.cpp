
#include "DivFunction.h"
#include "DerivableFunction.h"

 DivFunction::DivFunction(const DerivableFunction & left, const DerivableFunction & right) {

}

double DivFunction::Evaluate(double x) const {

  return left_->Evaluate(x) / right_->Evaluate(x);
}

string DivFunction::ToString() const {

  return "(" + left_->ToString() + " / " + right_->ToString() + ")";
}

DerivableFunction DivFunction::Derive() const {

  auto num1 = *left_->Derive() * right_; // x'y
  auto num2 = *left_ * right_->Derive(); // xy'
  auto den  = right_->Mul(right_); // y*y
  return num1->Sub(num2)->Div(den);
}

