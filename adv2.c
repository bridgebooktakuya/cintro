// Sample 1-5
#include <stdio.h>

int power(int a, int b){
  double result = 1.0;
  for(int i =0; i < b; i++){
    result = result * a;
  }
  return result;
}


int main(){
    int i = 0;
    double arctan1 = 0;
    double d;
    while(i < 10000){
      arctan1 += (double)power(-1,i) / (i*2 + 1);
      if(i % 100 == 0){
        printf("pi = %f\n", arctan1 * 4);
      }
      i++;
    }
}
