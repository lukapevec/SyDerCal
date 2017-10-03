#ifndef SYDERCAL_DIVFUNCTION_H
#define SYDERCAL_DIVFUNCTION_H

#include "../DerivableFunction.h"

class DivFunction : public DerivableFunction{
 private:
  const DerivableFunction* left_;
  const DerivableFunction* right_;
 public:
  DivFunction(const DerivableFunction*, const DerivableFunction*);
  double Evaluate(double d) const override;
  string ToString() const override;
  DerivableFunction *Derive() const override;
};

#endif //SYDERCAL_DIVFUNCTION_H
