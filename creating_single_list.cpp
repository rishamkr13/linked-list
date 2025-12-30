#include<iostream>
#include<cstdlib>
using namespace std;
struct node {
       int data;
       struct node *link;
};
int main(){
    struct node* head=NULL;
    head=(struct node *)malloc(sizeof(struct node));
    head->data=45;
    head->link=NULL;

    struct node* current=NULL;
    current=(struct node *)malloc(sizeof(struct node));
    current->data=98;
    current->link=NULL;
    head->link =current;

    struct node* current2=NULL;
    current2 = (struct node*)malloc(sizeof(struct node));
    current2->data=3;
    current2->link=NULL;
    current->link=current2;
    
    cout<<"   "<<current2->data<<endl;

    return 0;

}