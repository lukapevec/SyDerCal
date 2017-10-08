
#include "AddFunction.h"
#include "DerivableFunction.h"

 AddFunction::AddFunction(const DerivableFunction & left, const DerivableFunction & right) {

}

double AddFunction::Evaluate(double x) const {

  return left_->Evaluate(x) + right_->Evaluate(x);
}

string AddFunction::ToString() const {

  return "(" + left_->ToString() + " + " + right_->ToString() + ")";
}

DerivableFunction AddFunction::Derive() const {

  return *left_->Derive() + right_->Derive();
}

