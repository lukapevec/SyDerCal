#ifndef SYDERCAL_X_H
#define SYDERCAL_X_H

#include "NullaryFunction.h"

class X : public NullaryFunction {
 public:
  X() = default;
  string ToString() const override;
  DerivableFunction *Derive() const override;
  double Evaluate(double) const override;
 protected:
  NullaryFunction *NewInstance() const override;
};

#endif //SYDERCAL_X_H
