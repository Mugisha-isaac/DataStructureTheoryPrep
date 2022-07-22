#include<iostream>
#include<stdlib.h>


using namespace std;

struct Node{
    int data;
    struct Node * next;
};


void insertAtBeginning(struct Node** head, int  data){
     struct Node* newNode = new Node;
     newNode->data =data;
     newNode->next = (*head);
     *head = newNode;
}

void print(struct Node* node){
    while (node !=NULL)
    {
        cout<<node->data<<" ";
        node = node->next;
    }
    cout<<endl;
}

void insertAfterNode(struct Node * prev, int data){
    if(prev == NULL){
        cout<<"Prev node should not be null"<<endl;
        return;
    }

    struct  Node* newNode = new Node;
    newNode->data = data;
    newNode->next = prev->next;
    prev->next = newNode;
}

void searchNode(struct Node** head, int data){
    bool flag = false;
    struct Node* curr = *head;
    while (curr != NULL)
    {
        if(curr->data == data){
           flag = true;
           break;
        }
        curr = curr->next;
        flag=false;
    }

    if(flag == true){
        cout<<data<<" Data is Found!"<<endl;
    }
    else{
       cout<<data<<" Data is Not Found!"<<endl;
    }
    
}


int main(){
    struct Node* head = NULL;
    insertAtBeginning(&head,2);
    insertAtBeginning(&head,1);
    insertAtBeginning(&head,0);
    insertAfterNode(head->next->next,10);
    searchNode(&head,10);
    print(head);
}