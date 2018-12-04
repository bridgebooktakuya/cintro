#include <stdio.h>

int strLength(char *str){
 int n = 0;
 while( *str != ’\0’){
  str++;
  n++;
 }
 return n;
}

int main(){
 char* str = (char *)malloc(sizeof(char) * 100);

}
