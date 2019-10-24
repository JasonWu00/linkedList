#include <stdio.h>
#include <stdlib.h>
#include "nodes.h"

int main() {
  struct node *headOfList = calloc(sizeof(struct node), 1);
  printf("DEBUG: %i\n", headOfList->data);
  printf("Printing an empty list:\n");
  printList(headOfList);
  printf("\n");

  printf("populating the list with the following numbers, in that order: 1 2 3 4 3 2 1\n\n");

  headOfList = insertAtFront(headOfList, 3);

  printf("DEBUG again: printing list\n");
  printf("DEBUG: %i\n", headOfList->nextNode->data);
  //the debug works and returns 0 as intended, so it's a problem with my printlist
  return 0;
}
