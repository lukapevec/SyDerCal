
#include "SubFunction.h"
#include "DerivableFunction.h"

 SubFunction::SubFunction(const DerivableFunction & left, const DerivableFunction & right) {

}

double SubFunction::Evaluate(double x) const {

  return left_->Evaluate(x) - right_->Evaluate(x);
}

string SubFunction::ToString() const {

  return "(" + left_->ToString() + " - " + right_->ToString() + ")";
}

DerivableFunction SubFunction::Derive() const {

  return *left_->Derive() - right_->Derive();
}

