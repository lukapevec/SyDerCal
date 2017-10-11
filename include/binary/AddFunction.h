#ifndef SYDERCAL_ADDFUNCTION_H
#define SYDERCAL_ADDFUNCTION_H

#include "BinaryFunction.h"

class AddFunction : public BinaryFunction {
 public:
  AddFunction(const DerivableFunction &, const DerivableFunction &);
  double Evaluate(double) const override;
  string ToString() const override;
  DerivableFunction & Derive() const override;
  DerivableFunction &Simplify() const override;
 protected:
  BinaryFunction &NewInstance(const DerivableFunction &, const DerivableFunction &) const override;
};

#endif //SYDERCAL_ADDFUNCTION_H
