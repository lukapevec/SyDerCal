#ifndef SYDERCAL_NULLARYFUNCTION_H
#define SYDERCAL_NULLARYFUNCTION_H

#include "../DerivableFunction.h"

class NullaryFunction : public DerivableFunction{
 protected:
  explicit NullaryFunction() = default;
  virtual NullaryFunction *NewInstance() const = 0;
  ~NullaryFunction() override = default ;
 public:
  virtual DerivableFunction *Simplify() const override;
};

#endif //SYDERCAL_NULLARYFUNCTION_H
