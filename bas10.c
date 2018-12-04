#include <stdio.h>
int main(){
 int* p = (int *)malloc(sizeof(int)*5);
 int q = p;
 printf("整数値を5個入力してください。ひとつ入力するごとに改行を押してください。\n");
 for(int i = 0; i < 5; i++){
   scanf("%d",p);
   p++;
 }
 printf("配列の中身は以下の通りです。\n");
 p = q;
 for(int i = 0; i < 5; i++){
   printf("値:%d\n",*p);
   printf("アドレス:%p\n",p);
   // printf("p:%d\n", p);
   p++;
 }
}
