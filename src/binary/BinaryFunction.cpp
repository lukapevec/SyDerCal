#include "../../include/binary/BinaryFunction.h"

BinaryFunction::BinaryFunction(const DerivableFunction *left, const DerivableFunction *right) :
    left_(left), right_(right) {
}

BinaryFunction::~BinaryFunction() {
  delete left_;
  delete right_;
}

DerivableFunction *BinaryFunction::Simplify() const {
  auto *sim_left = left_->Simplify();
  auto *sim_right = right_->Simplify();
  return NewInstance(sim_left, sim_right);
}
