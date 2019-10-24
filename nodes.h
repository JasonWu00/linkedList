struct node(int i; struct node *nextNode;);

void printList(struct node *headOfList);
struct node * insertAtFront(struct node *headOfList, int cargo);
struct node * freeList(struct node *headOfList);
