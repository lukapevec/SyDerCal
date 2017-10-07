#include "../include/BinaryFunction.h"

BinaryFunction::BinaryFunction(const DerivableFunction *left, const DerivableFunction *right) :
    left_(left), right_(right) {
}

BinaryFunction::~BinaryFunction() {
  delete left_;
  delete right_;
}
