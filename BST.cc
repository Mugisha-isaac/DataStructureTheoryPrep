#include<iostream>

using namespace std;

struct Node{
    int val;
    struct Node* left;
    struct Node* right;
};

struct Node* newNode(int item){
     struct Node * newNode = new Node;
     newNode->val = item;
     newNode->left=newNode->right = NULL;
     return newNode;
};


void inOrder(struct Node *root){
    if(root!=NULL){
        cout<<root->val<<"->";
        inOrder(root->right);
         cout<<endl;
    }
}

struct Node *insert(struct Node *node, int key){
    if(node == NULL){
        return newNode(key);
    }
    else{
        if(key<node->val){
           node->left = insert(node->left,key);
        }
        else if(key>node->val){
            node->right = insert(node->right, key);
        }
    }
    return node;
}



int main(){
    struct Node *root = NULL;

    root = insert(root,8);
    root = insert(root,10);
    root = insert(root,12);

    cout<<"Inorder traversal: "<<endl;
    inOrder(root);

    return 0;
}