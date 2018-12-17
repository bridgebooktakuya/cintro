#include <stdio.h>
#include <stdlib.h>

typedef struct node {
  char name[50];
  struct node* next;
} node;


int main(){

  node *a, *head ,*route;
  head = (node*)malloc(sizeof(node));
  a = head;

  FILE *fp;
  fp = fopen("data.txt","r");
  while(fscanf(fp, "%s", a->name) != EOF){
    a->next = (node*)malloc(sizeof(node));
    a = a->next;
  }
  a->next = NULL;

  int num;
  char fname[50];
  printf("What is the number of your new friend ?\n");
  scanf("%d", &num);
  printf("What is the name of your new friend ?\n");
  scanf("%c", fname);

  a = head;
  for(int i = 0; i < num -1 ; i++){
    a = a->next;
  }
  route = a;
  a->name = fname;
  a->next = route;

  a = head;
  while(a->next->next != NULL){
    printf("name: %s\n", a->name);
    a = a->next;
  }

}
