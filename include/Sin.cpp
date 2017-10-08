
#include "Sin.h"

 Sin::Sin(const DerivableFunction & argument) {
}

string Sin::ToString() const {

  return "sin(" + argument_->ToString() + ")";
}

DerivableFunction Sin::Derive() const {

  return new Cos(argument_);
}

double Sin::Evaluate(double d) const {

  return sin(d);
}

