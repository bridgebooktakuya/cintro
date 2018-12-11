#include <stdio.h>
#include <stdlib.h>

typedef struct person {
  char name[30];
  char email[40];
} personData;

typedef struct company {
  personData ceo;
  personData employees[100];
} companyData;

int main(){
 companyData c;
 scanf("%s %s", c.ceo.name, c.ceo.email);
 int i = 0;
 while( scanf("%s %s", c.employees[i].name, c.employees[i].email) != EOF){
  i++;
};
int employeeNum = i;

 printf("CEOの名前: %s\n",  c.ceo.name);
 printf("CEOのアドレス: %s\n", c.ceo.email);
 printf("\n");

 for(i = 0; i < employeeNum; i++){
   printf("名前: %s\n",  c.employees[i].name);
   printf("アドレス: %s\n", c.employees[i].email);
   printf("\n");
 };
}
