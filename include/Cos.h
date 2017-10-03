#ifndef SYDERCAL_COS_H
#define SYDERCAL_COS_H

#include "DerivableFunction.h"
#include "Sin.h"
#include "Const.h"

class Cos : public DerivableFunction {
 private:
  const DerivableFunction *argument_;
 public:
  explicit Cos(const DerivableFunction *argument);
  string ToString() const override;
  DerivableFunction *Derive() const override;
  double Evaluate(double d) const override;
};

#endif //SYDERCAL_COS_H
