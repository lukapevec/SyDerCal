#include "../../include/nullary/NullaryFunction.h"

DerivableFunction &NullaryFunction::Simplify() const {
  return const_cast<NullaryFunction &>(*this);
}
