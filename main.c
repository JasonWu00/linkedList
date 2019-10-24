#include <stdio.h>
#include <stdlib.h>
#include "nodes.h"

int main() {
  struct node *headOfList = calloc(sizeof(int) + 8, 1);
  printf("Printing an empty list:\n");
  printList(headOfList);
  printf("\n");

  printf("populating the list with the following numbers, in that order:\n");
  printf("1 2 3 4 3 2 1\n\n");

  return 0;
}
