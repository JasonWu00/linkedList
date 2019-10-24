#include <stdio.h>
#include <stdlib.h>
#include "nodes.h"

void printList(struct node *headOfList) {
  printf("[");
  printSingleNode(headOfList);
  printf("]\n");
}

struct node * insertAtFront(struct node *headOfList, int cargo) {
  struct node *newHead = calloc(sizeof(struct node), 1);
  newHead->nextNode = headOfList;
  newHead->data = cargo;
  return newHead;
}

void printSingleNode(struct node *headOfList) { //helper function
  if (headOfList->data != NULL) {
    printf(" %i ", headOfList->data);
  }
  if (headOfList->nextNode != NULL) {
    printSingleNode(headOfList->nextNode);
  }
}
