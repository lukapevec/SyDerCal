#ifndef SYDERCAL_ADDFUNCTION_H
#define SYDERCAL_ADDFUNCTION_H

#include "../DerivableFunction.h"

class AddFunction : public DerivableFunction {
 private:
  const DerivableFunction *left_;
  const DerivableFunction *right_;
 public:
  AddFunction(const DerivableFunction *, const DerivableFunction *);
  double Evaluate(double) const override;
  string ToString() const override;
  DerivableFunction* Derive() const override;
};

#endif //SYDERCAL_ADDFUNCTION_H
