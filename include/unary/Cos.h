#ifndef SYDERCAL_COS_H
#define SYDERCAL_COS_H

#include "Const.h"
#include "UnaryFunction.h"
#include "Sin.h"

class Cos : public UnaryFunction {
 public:
  explicit Cos(const DerivableFunction *argument);
  double Evaluate(double) const override;
  string ToString() const override;
  DerivableFunction *Derive() const override;
 protected:
  UnaryFunction *NewInstance(const DerivableFunction *function) const override;
};

#endif //SYDERCAL_COS_H
