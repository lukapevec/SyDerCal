
#include "BinaryFunction.h"

 BinaryFunction::BinaryFunction(const DerivableFunction & left, const DerivableFunction & right) {

}

 BinaryFunction::~BinaryFunction() {

  delete left_;
  delete right_;
}

