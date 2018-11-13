#include <stdio.h>
#include <math.h>
int main(){
 int i = 1;
 double arctan1 = 0;
 double fact = 1;
 while(i < 10){
  fact = fact * i;
  arctan1 = arctan1 + (1.0 / fact);
  printf("nei = %f\n", arctan1);
  i++;
 }
}
