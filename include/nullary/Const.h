#ifndef SYDERCAL_CONST_H
#define SYDERCAL_CONST_H

#include "NullaryFunction.h"

class Const : public NullaryFunction {
 private:
  double argument_;
 public:
  explicit Const(double argument);
  string ToString() const override;
  DerivableFunction &Derive() const override;
  double Evaluate(double) const override;
};

#endif //SYDERCAL_CONST_H
