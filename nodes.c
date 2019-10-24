#include <stdio.h>
#include <stdlib.h>
#include "nodes.h"

void printList(struct node *headOfList) {
  printf("[ ");
  printf(headOfList->i);
  printf(" ");
  if (headOfList->nextNode != NULL) {
    printList(headOfList->nextNode);
  }
  printf("]\n");
}
