#ifndef SYDERCAL_EXP_H
#define SYDERCAL_EXP_H

#include "DerivableFunction.h"

class Exp : public DerivableFunction {
 private:
  const DerivableFunction* argument_;
 public:
  explicit Exp(const DerivableFunction* argument);
  string ToString() const override;
  DerivableFunction *Derive() const override;
  double Evaluate(double d) const override;
};

#endif //SYDERCAL_EXP_H
