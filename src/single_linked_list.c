/*
 * 
 * Singly Linked List
 *
 */

struct LinkedList {
  int data;
  struct LinkedList *next;
};

typedef struct LinkedList *node;

node createNode(){
  node temp;
  temp = (node)malloc(sizeof(struct(LinkedList)));
  temp->next = NULL; 
  return temp;
}

node addNode(node head, int value){
  node temp,p;
  temp = createNode();
  temp->data = value;
  if (head == NULL){
    head = temp; //when linked list is empty
  }
  else{
    p = head;
    while(p->next != NULL){
      p = p->next; //traverse list until p is last node (NULL)
    }
    p->next = temp; //point prev last node to new node
  }
  return head;
}


