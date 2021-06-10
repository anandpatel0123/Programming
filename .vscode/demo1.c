#include<stdio.h>
#include <stdlib.h>

struct node {
    struct node *prev;
    int data;
    struct node *next;
}*first=0,*last=0;

int main(){
    struct node *t,*p;
    int count=0,i;

    first = (struct node *)malloc(sizeof(struct node));
    first->data = NULL;
    first->next=first->prev=NULL;
    last=first;

    do{
        t = (struct node *)malloc(sizeof(struct node));
        if(t==NULL){
            printf("\n Heap is Full");
            break;
        }
        else{
            scanf("%d",&t->data);
            if(first->data==NULL && count==0 && (t->data!=0 || t->data==0))
                first=last=t;
            else{
                t->prev=last;
                t->next = NULL;
                last->next= t;
                last = t;
            }
        }
        scanf("%d",&i);
        count++;
    }while(i);

    p = first;
    while(p!=NULL){
        printf("\n%d",p->data);
        p = p->next;
    }

    p = last;
    while(p!=NULL){
        printf("\n%d",p->data);
        p = p->prev;
    }
}