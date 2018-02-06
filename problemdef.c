# include "nsga2.h"

void set_test_problem(void (*f)(double*, double*, int**, double*, double*)) {
  test_problem = f;
}