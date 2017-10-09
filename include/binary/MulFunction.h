#ifndef SYDERCAL_MULFUNCTION_H
#define SYDERCAL_MULFUNCTION_H

#include "BinaryFunction.h"

class MulFunction : public BinaryFunction {
 public:
  MulFunction(const DerivableFunction *, const DerivableFunction *);
  double Evaluate(double) const override;
  string ToString() const override;
  DerivableFunction *Derive() const override;
  DerivableFunction *Simplify() const override;
 protected:
  BinaryFunction *NewInstance(const DerivableFunction *, const DerivableFunction *) const override;
};

#endif //SYDERCAL_MULFUNCTION_H
