#ifndef SYDERCAL_MULFUNCTION_H
#define SYDERCAL_MULFUNCTION_H

#include "DerivableFunction.h"

class MulFunction : public DerivableFunction {
 private:
  const DerivableFunction *left_;
  const DerivableFunction *right_;
 public:
  MulFunction(const DerivableFunction *, const DerivableFunction *);
  double Evaluate(double) const override;
  string ToString() const override;
  DerivableFunction* Derive() const override;
};

#endif //SYDERCAL_MULFUNCTION_H
