#ifndef SYDERCAL_SIN_H
#define SYDERCAL_SIN_H

#include "UnaryFunction.h"
#include "Cos.h"

class Sin : public UnaryFunction {
 public:
  explicit Sin(const DerivableFunction *argument);
  string ToString() const override;
  DerivableFunction *Derive() const override;
  double Evaluate(double) const override;
 protected:
  UnaryFunction *NewInstance(const DerivableFunction *) const override;
};

#endif //SYDERCAL_SIN_H
