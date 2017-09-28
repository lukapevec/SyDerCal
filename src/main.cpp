#include <iostream>
#include "Exp.h"
#include "X.h"

using namespace std;

int main() {
  auto *func = *(new Exp(new X())) + new X();
  auto *alt_func = (new Exp(new X()))->Add(new X());
  cout << "f(x) = " << (*func).ToString() << endl;
  cout << "f(x) = " << (string) *func << endl;
  cout << "f(x) = " << (string) *alt_func << endl;
  cout << "f(0) = " << func->Evaluate(0) << endl;
  cout << "f(1) = " << (*func)(1) << endl;
  auto *dfunc = func->Derive();
  cout << "f'(x) = " << (string) *dfunc << endl;
  cout << "f'(0) = " << dfunc->Evaluate(0) << endl;
  cout << "f'(1) = " << (*dfunc)(1) << endl;
  return 0;
}