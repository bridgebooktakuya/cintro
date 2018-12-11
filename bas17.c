#include <stdio.h>
#include <stdlib.h>

typedef struct node {
  char name[50];
  char email[80];
  struct node* next;
} node;


int main(){
  node *a, *head;
  head = (node*)malloc(sizeof(node));
  a = head;

  while(scanf("%s %s", a->name, a->email)!=EOF){
    a->next = (node*)malloc(sizeof(node));
    a = a->next;
  }

  a->next = NULL;

  a = head;

  while(a->next->next != NULL){
    printf("name: %s\n", a->name);
    printf("email: %s\n", a->email);
    a = a->next;
  }




 }
