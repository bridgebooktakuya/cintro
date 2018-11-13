#include <stdio.h>

double power(double a, int b){
  double result = 1;
  for(int i =0; i < b; i++){
    result = result * a;
  }
  return result;
}

int fact(int a){
 if(a == 0){
   return 1;
 }else{
   return a *  fact(a-1);
 }
}


double mysin(double x){
  double sin;
  for(int n=0;;n++){
    int t = 2*n+1;
    sin += power(-1,n)*power(x,t)/fact(t);

    if(n == 10){
      return sin;
    }
  }
}

double mycos(double x){
 double cos;
 for(int n=0;;n++){
   int t = 2*n;
   cos += power(-1,n)*power(x,t)/fact(t);

   if(n == 10){
     return cos;
   }
 }
}

int main(){
 printf("mysin(π/4)=%f\n",mysin(3.1415/4));
 printf("mycos(π/4)=%f\n",mycos(3.1415/4));
}
