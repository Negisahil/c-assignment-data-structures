#include<stdio.h>
#include<stdlib.h>
 
struct Node
{
    int data;
    struct Node *next;
};
 
void linkedListTraversal(struct Node *head){
    struct Node *ptr = head;
    do{
        printf("Element is %d\n", ptr->data);
        ptr = ptr->next;
    }while(ptr!=head);
}
 
struct Node * insertAtFirst(struct Node *head, int data){
    struct Node * ptr = (struct Node *) malloc(sizeof(struct Node));
    ptr->data = data;
 
    struct Node * p = head->next;
    while(p->next != head){
        p = p->next;
    }
   
    p->next = ptr;
    ptr->next = head;
    head = ptr;
    return head;
 
}
 
int main(){
    
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;
 
    
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));
 
   
    head->data = 001;
    head->next = second;
 
   
    second->data = 002;
    second->next = third;
 
   
    third->data = 003;
    third->next = fourth;
 

    fourth->data = 004;
    fourth->next = head;

      printf("Circular Linked list before insertion\n");
    linkedListTraversal(head);
    head = insertAtFirst(head, 005);
    head = insertAtFirst(head, 006);
    head = insertAtFirst(head, 007);
    printf("Circular Linked list after we inserted new data\n");
    linkedListTraversal(head);
 
    return 0;
}
