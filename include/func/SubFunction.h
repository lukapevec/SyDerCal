#ifndef SYDERCAL_SUBFUNCTION_H
#define SYDERCAL_SUBFUNCTION_H

#include "../DerivableFunction.h"

class SubFunction : public DerivableFunction{
 private:
  const DerivableFunction* left_;
  const DerivableFunction* right_;
 public:
  SubFunction(const DerivableFunction*, const DerivableFunction*);
  double Evaluate(double d) const override;
  string ToString() const override;
  DerivableFunction *Derive() const override;
};

#endif //SYDERCAL_SUBFUNCTION_H
