#include <stdio.h>
#include <stdlib.h>
#include "list.h"

int main(){
  printf("Inserting and printing list: \n");
  struct node * zam = insert_front(zam,250);
  print_list(zam);
  
  free_list(zam);
  printf("\n Freed list.  Doing again with the number 18. \n");
  insert_front(zam,18);
  print_list(zam);
  return 0;
}

