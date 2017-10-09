#ifndef SYDERCAL_DIVFUNCTION_H
#define SYDERCAL_DIVFUNCTION_H

#include "../BinaryFunction.h"

class DivFunction : public BinaryFunction {
 public:
  DivFunction(const DerivableFunction *, const DerivableFunction *);
  double Evaluate(double d) const override;
  string ToString() const override;
  DerivableFunction *Derive() const override;
  DerivableFunction *Simplify() const override;
 protected:
  BinaryFunction *NewInstance(const DerivableFunction *, const DerivableFunction *) const override;
};

#endif //SYDERCAL_DIVFUNCTION_H
