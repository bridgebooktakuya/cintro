#include <stdio.h>
#include <stdlib.h>

struct item {
  char code[10];
  char name[40];
  int price;

};

int main(){
 struct item items[100];

int i = 0;
 while( scanf("%s %s %d", items[i].code, items[i].name,
                                 &(items[i].price)) != EOF){
  i++;
 };

int itemNum = i;

 for(i = 0; i < itemNum; i++){
   printf("商品コード: %s\n",  items[i].code);
   printf("商品名: %s\n", items[i].name);
   printf("値段: %d\n", items[i].price);
   printf("\n");
 };
}
