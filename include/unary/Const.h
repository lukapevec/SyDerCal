#ifndef SYDERCAL_CONST_H
#define SYDERCAL_CONST_H

#include "../DerivableFunction.h"

class Const : public DerivableFunction {
 private:
  double argument_;
 public:
  explicit Const(double argument);
  string ToString() const override;
  DerivableFunction *Derive() const override;
  double Evaluate(double) const override;
};

#endif //SYDERCAL_CONST_H
