#include <stdio.h>
#include <math.h>

int main(){
  double x = 0;
  int n = 1;
  while(n < 11){
    x += 1.0 / pow(n,2);
    n++;
  }
  double pai = sqrt(6*x);
  printf("pai=%f\n", pai);
}
