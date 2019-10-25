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

struct node * removeNode(struct node *headOfList, int target) {
  //renamed method due to conflict with existing inbuilt remove
  if (headOfList->nextNode != NULL && headOfList->nextNode->data != target) {
    removeNode(headOfList->nextNode, target);
  }
  if (headOfList->nextNode == NULL) {
    return headOfList;
  }
  if (headOfList->nextNode->data == target) {
    struct node *restOfList = headOfList->nextNode->nextNode;
    struct node *ax = headOfList->nextNode;
    free(ax);
    headOfList->nextNode = restOfList;
  }
  return headOfList;
}

void printSingleNode(struct node *headOfList) { //helper function
  if (headOfList->data != NULL) {
    printf(" %i ", headOfList->data);
  }
  if (headOfList->nextNode != NULL) {
    printSingleNode(headOfList->nextNode);
  }
}
