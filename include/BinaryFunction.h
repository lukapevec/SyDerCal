#ifndef SYDERCAL_BINARYFUNCTION_H
#define SYDERCAL_BINARYFUNCTION_H

#include "DerivableFunction.h"

class BinaryFunction : public DerivableFunction {
 protected:
  const DerivableFunction *left_;
  const DerivableFunction *right_;
  BinaryFunction(const DerivableFunction *, const DerivableFunction *);
  ~BinaryFunction() override;
};

#endif //SYDERCAL_BINARYFUNCTION_H
