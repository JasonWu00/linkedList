#include <stdio.h>
#include <stdlib.h>
#include "nodes.h"

void printList(struct node *headOfList) {
  printf("[ ");
  printf(headOfList->data);
  printf(" ");
  /*if (headOfList->nextNode != NULL) {
    printList(headOfList->nextNode);
  }*/
  printf("]\n");
}

struct node * insertAtFront(struct node *headOfList, int cargo) {
  struct node *newHead = calloc(sizeof(struct node), 1);
  newHead->nextNode = headOfList;
  newHead->data = cargo;
  return newHead;
}
