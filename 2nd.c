#include <stdio.h>
#include <stdlib.h>

typedef struct ListNode{
    int item;
    struct ListNode *next;
}ListNode;

typedef struct String {
    int size;
    ListNode head;
} String; 

ListNode *new_char_node(char c){
    ListNode *n = (ListNode *)malloc(sizeof(ListNode));
    n -> item = c;
    n -> next = NULL;
    
    return n;
}

String *newStr(char *c){
    String *s = (String *)malloc(sizeof(String));
    ListNode *p = &s->head; 
    
    while(*c){
        p->next=new_char_node(*c++);
        p=p->next;
        s->size++;
    }
    
    return s;
}
String * subStr(String *s, int start, int end){
    
    char buff[end-start+1];
    ListNode *sp=&s->head;
    
    int i, j = 0;
    for (i = 0; i < end && sp != NULL; i++){
        if(i>=start){
            buff[j++]  = sp->item;
        } 
        
        sp = sp->next;
        
    }
    
    
    printf("%s\n", buff);
    return  newStr(buff);
}


int main()
{
    subStr(newStr("sahil"), 2, 10);
    subStr(newStr("sahil"), 2, 6);
    subStr(newStr("sahil"), 0, 20);

}