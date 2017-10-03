#ifndef SYDERCAL_POWFUNCTION_H
#define SYDERCAL_POWFUNCTION_H

#include "DerivableFunction.h"

class PowFunction : public DerivableFunction{
 private:
  const DerivableFunction* base_;
  const DerivableFunction* exponent_;
 public:
  PowFunction(const DerivableFunction* base, const DerivableFunction* exponent);
  double Evaluate(double x) const override;
  string ToString() const override;
  DerivableFunction *Derive() const override;
};

#endif //SYDERCAL_POWFUNCTION_H
