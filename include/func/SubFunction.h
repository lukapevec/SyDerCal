#ifndef SYDERCAL_SUBFUNCTION_H
#define SYDERCAL_SUBFUNCTION_H

#include "../BinaryFunction.h"

class SubFunction : public BinaryFunction {
 public:
  SubFunction(const DerivableFunction *, const DerivableFunction *);
  double Evaluate(double d) const override;
  string ToString() const override;
  DerivableFunction *Derive() const override;
  DerivableFunction *Simplify() const override;
 protected:
  BinaryFunction *NewInstance(const DerivableFunction *, const DerivableFunction *) const override;
};

#endif //SYDERCAL_SUBFUNCTION_H
