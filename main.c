#include <stdio.h>
#include <stdlib.h>
#include "nodes.h"

int main() {
  struct node *headOfList;
  headOfList = calloc(sizeof(struct node), 1);

  printf("Printing an empty list:\n");
  printList(headOfList);
  printf("\n");


  printf("populating the list with the following numbers, in that order: 1 2 3 4 3 2 1\n\n");

  headOfList = insertAtFront(headOfList, 1);
  headOfList = insertAtFront(headOfList, 2);
  headOfList = insertAtFront(headOfList, 1);

  printf("DEBUG again: printing list\n");
  printList(headOfList);

  return 0;
}
