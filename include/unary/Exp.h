#ifndef SYDERCAL_EXP_H
#define SYDERCAL_EXP_H

#include "UnaryFunction.h"

class Exp : public UnaryFunction {
 public:
  explicit Exp(const DerivableFunction *argument);
  double Evaluate(double) const override;
  string ToString() const override;
  DerivableFunction *Derive() const override;
 protected:
  UnaryFunction *NewInstance(const DerivableFunction *) const override;
};

#endif //SYDERCAL_EXP_H
