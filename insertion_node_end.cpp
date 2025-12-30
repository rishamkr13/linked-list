#include<iostream>
#include<cstdlib>
using namespace std;

struct node{
    int data;
    struct node *link;
};

void add_at_end(struct node *head, int data){
         add_at_end(head,67);
        struct node *ptr *temp;
        ptr=head;

        //creating a node
        temp=(struct node*)malloc(sizeof(struct node));
        temp->data=data;
        temp->link=link;

        //shifting link to another
        while(ptr->link!=NULL){
            ptr=ptr->link;
        }
          ptr->link=temp;

     }

int main(){

   

    struct node *head, *current, *current2;
    head=(struct node*)malloc(sizeof(struct node));
    current=(struct node*)malloc(sizeof(struct node));
    current2=(struct node*)malloc(sizeof(struct node));
    head->data=45;
    current->data=98;
    head->link=current;
    current2->data=3;
    current->link=current2; 
    current2->link=NULL;

    add_at_end(head,9);
}
