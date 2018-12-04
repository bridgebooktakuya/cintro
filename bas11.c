#include <stdio.h>
int main(){
 char* p = (char *)malloc(sizeof(char)*5);
 int q = p;
 printf("文字を5個入力してください。ひとつ入力するごとに改行を押してください。\n");
 char* str = (char *)malloc(sizeof(char) * 2);
 for(int i = 0; i < 5; i++){
   scanf("%s",str);
   *p = *str;
   p++;
 }
 printf("配列の中身は以下の通りです。\n");
 p = q;
 for(int i = 0; i < 5; i++){
   printf("値:%c\n",*p);
   printf("アドレス:%p\n",p);
   // printf("p:%d\n", p);
   p++;
 }
}
