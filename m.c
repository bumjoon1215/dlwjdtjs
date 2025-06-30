#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
  int data;
  struct Node *next;
}Node;

Node * createNode(int data){
  Node * newNode = (Node*)malloc(sizeof(Node));
  if(newNode==NULL){
    printf("");
    exit(0);
  }
  newNode->data=data;
  newNode->next=NULL;
  return newNode;
}

void appendNode(Node** head, int data){
  Node * newNode = createNode(data);
  if(*head == NULL){
    *head = newNode;
    return;
  }

  Node* current = *head;
  while(current->next != NULL){
    current = current->next;
  }

  current->next = newNode;
}

void printList(Node * head){
  Node *current = head;
  while(current != NULL){
    printf("%d\t", current->data);
    current = current->next;
  }
  printf("\n");
}

void freeList(Node* head){
  Node *temp;
  while (head !=NULL){
    temp=head;
    head=head->next;
    free(temp);
  }
}

int main(void) {
  Node* head = NULL;

  int data=1;

  while(data != 0){
    printf("\n넣고 싶은 숫자를 적으시오.(단, 0 넣으면 종료): ");
    scanf("%d", &data);
    appendNode(&head, data);
    
  }

  printf("연결 리스트:");
  printList(head);
  freeList(head);
  
  return 0;
}