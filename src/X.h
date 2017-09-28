#ifndef SYDERCAL_X_H
#define SYDERCAL_X_H

#include "DerivableFunction.h"

class X : public DerivableFunction {
 public:
  X() = default;
  string ToString() const override;
  DerivableFunction *Derive() const override;
  double Evaluate(double d) const override;
};

#endif //SYDERCAL_X_H
