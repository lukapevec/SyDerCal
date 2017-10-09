#include "../../include/unary/UnaryFunction.h"

UnaryFunction::UnaryFunction(const DerivableFunction *argument) :
    argument_(argument) {
}

UnaryFunction::~UnaryFunction() {
  delete argument_;
}

DerivableFunction *UnaryFunction::Simplify() const {
  auto *sim = argument_->Simplify();
  return NewInstance(sim);
}
