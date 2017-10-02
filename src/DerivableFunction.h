#ifndef SYDERCAL_DERIVABLEFUNCTION_H
#define SYDERCAL_DERIVABLEFUNCTION_H

#include<string>
using namespace std;

class DerivableFunction {
 protected:
  DerivableFunction() = default;
 public:
  virtual DerivableFunction *Derive() const = 0;
  virtual string ToString() const = 0;
  explicit operator string() const;
  virtual double Evaluate(double) const = 0;
  double operator()(double) const;
  DerivableFunction *Add(const DerivableFunction *) const;
  DerivableFunction *operator+(const DerivableFunction *) const;
  DerivableFunction *Sub(const DerivableFunction *) const;
  DerivableFunction *operator-(const DerivableFunction *) const;
  DerivableFunction *Mul(const DerivableFunction *) const;
  DerivableFunction *operator*(const DerivableFunction *) const;
  DerivableFunction *Div(const DerivableFunction *) const;
  DerivableFunction *operator/(const DerivableFunction *) const;
};

#endif //SYDERCAL_DERIVABLEFUNCTION_H
