#include <iostream>
#include "Exp.h"
#include "X.h"

using namespace std;

int main() {
  auto *func = *(new Exp(new X())) + new X();
  auto *alt_func = (new Exp(new X()))->Mul(new X());
  cout << "f(x) = " << (*func).ToString() << endl;
  cout << "g(x) = " << (string) *alt_func << endl;
  cout << "f(0) = " << func->Evaluate(0) << endl;
  cout << "f(1) = " << (*func)(1) << endl;
  cout << "g(0) = " << alt_func->Evaluate(0) << endl;
  cout << "g(1) = " << (*alt_func)(1) << endl;
  auto *d_func = func->Derive();
  auto *d_alt_func = alt_func->Derive();
  cout << "f'(x) = " << (string) *d_func << endl;
  cout << "g'(x) = " << (string) *d_alt_func << endl;
  cout << "f'(0) = " << (*d_func)(0) << endl;
  cout << "f'(1) = " << (*d_func)(1) << endl;
  cout << "g'(0) = " << (*d_alt_func)(0) << endl;
  cout << "g'(1) = " << (*d_alt_func)(1) << endl;
  return 0;
}