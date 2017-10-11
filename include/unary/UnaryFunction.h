#ifndef SYDERCAL_UNARYFUNCTION_H
#define SYDERCAL_UNARYFUNCTION_H

#include "../DerivableFunction.h"

class UnaryFunction : public DerivableFunction {
 protected:
  const DerivableFunction &argument_;
  explicit UnaryFunction(const DerivableFunction &);
  virtual UnaryFunction &NewInstance(const DerivableFunction &) const = 0;
  ~UnaryFunction() override;
 public:
  virtual DerivableFunction &Simplify() const override;
};

#endif //SYDERCAL_UNARYFUNCTION_H
