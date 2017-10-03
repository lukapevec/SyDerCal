#ifndef SYDERCAL_SIN_H
#define SYDERCAL_SIN_H

#include "DerivableFunction.h"
#include "Cos.h"

class Sin : public DerivableFunction {
 private:
  const DerivableFunction *argument_;
 public:
  explicit Sin(const DerivableFunction *argument);
  string ToString() const override;
  DerivableFunction *Derive() const override;
  double Evaluate(double d) const override;
};

#endif //SYDERCAL_SIN_H
