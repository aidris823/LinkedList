#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "list.h"
				     
//Takes pointer to Node struct.  
//Returns all data in that list.
void print_list(struct node * base){
  printf("\n Node data: ");
  while (base){
    printf("%d",base->i);
    base = base -> next;
  }
}

//Takes pointer to exisitng list and tobeadded data.
//Makes new node, appends to list beginning
//Returns pointer to beginning of list
struct node * insert_front(struct node * prev, int x){

  struct node * front = malloc(sizeof(struct node));
  front->i = x;
  front->next = prev;
  return front;
}

//param: pointer to list
//liberates each node and returns pointer to beginning of list (which is NULL by then)
struct node * free_list(struct node * ll){
  //to avoid warnings
  struct node * cur;
  while (ll){
    struct node * cur = ll -> next;
    free(ll);
    ll = cur;
  }
  return cur;
}
    
