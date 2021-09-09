
#include <stdio.h>
#include <stdlib.h>

#define SIZE 10000
  
double v[SIZE];

int main() {


  int i;
  for (i=0; i<SIZE; i++) {
    v[i] = (double) 3.3/(i+1);
  }


  double total = 0;
#pragma omp parallel for  
  for (i=0; i<SIZE; i++) {
#pragma omp atomic
    total += v[i];
  }

  printf("%.12f\n", total);

  return 0;
}
