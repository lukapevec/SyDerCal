#define _USE_MATH_DEFINES

#include <iostream>
#include <cmath>

#include "Exp.h"
#include "Sin.h"
#include "Cos.h"
#include "X.h"

using namespace std;

int main() {
  auto *func1 = *(new Exp(new X())) + new X();
  auto *func2 = (new Exp(new X()))->Mul(new X());
  cout << "f(x) = " << (*func1).ToString() << endl;
  cout << "g(x) = " << (string) *func2 << endl;
  cout << "f(0) = " << func1->Evaluate(0) << endl;
  cout << "f(1) = " << (*func1)(1) << endl;
  cout << "g(0) = " << func2->Evaluate(0) << endl;
  cout << "g(1) = " << (*func2)(1) << endl;

  auto *d_func = func1->Derive();
  auto *d_alt_func = func2->Derive();
  cout << "f'(x) = " << (string) *d_func << endl;
  cout << "g'(x) = " << (string) *d_alt_func << endl;
  cout << "f'(0) = " << (*d_func)(0) << endl;
  cout << "f'(1) = " << (*d_func)(1) << endl;
  cout << "g'(0) = " << (*d_alt_func)(0) << endl;
  cout << "g'(1) = " << (*d_alt_func)(1) << endl;

  // sin(x) operation test
  auto *func3 = new Sin(new X());
  cout << endl;
  cout << "h(x) = " << (string) *func3 << endl;
  cout << "h(0) = " << func3->Evaluate(0) << endl;
  cout << "h(pi/2) = " << (*func3)(M_PI/2) << endl;
  auto *d_func3 = func3->Derive();
  cout << "h'(x) = " << (string) *d_func3 << endl;
  cout << "h'(0) = " << (*d_func3)(0) << endl;
  cout << "h'(pi/2) = " << d_func3->Evaluate(M_PI/2) << endl;

  // cos(x) operation test
  auto *func4 = new Cos(new X());
  cout << endl;
  cout << "k(x) = " << (string) *func4 << endl;
  cout << "k(0) = " << func4->Evaluate(0) << endl;
  cout << "k(pi/2) = " << (*func4)(M_PI/2) << endl;
  auto *d_func4 = func4->Derive();
  cout << "k'(x) = " << (string) *d_func4 << endl;
  cout << "k'(0) = " << (*d_func4)(0) << endl;
  cout << "k'(pi/2) = " << (*d_func4)(M_PI/2) << endl;

  return 0;
}