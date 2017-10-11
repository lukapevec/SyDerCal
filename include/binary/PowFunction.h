#ifndef SYDERCAL_POWFUNCTION_H
#define SYDERCAL_POWFUNCTION_H

#include "BinaryFunction.h"

class PowFunction : public BinaryFunction {
 public:
  PowFunction(const DerivableFunction &, const DerivableFunction &);
  double Evaluate(double x) const override;
  string ToString() const override;
  DerivableFunction &Derive() const override;
  DerivableFunction &Simplify() const override;
 protected:
  BinaryFunction &NewInstance(const DerivableFunction &, const DerivableFunction &) const override;
};

#endif //SYDERCAL_POWFUNCTION_H
