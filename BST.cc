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



struct Node* minValueNode(struct Node* node){
    struct Node* curr = node;
    while(curr && curr->left !=NULL){
        curr = curr->left;
    }

    return curr;
}



struct Node *deleteNode(struct Node* root,int key){
    if(root==NULL) {
        return NULL;
    }
    else if(key<root->val){
        root->left = deleteNode(root->left, key);
    }
    else if(key>root->val){
        root->right = deleteNode(root->right,key);
    }
    else{
        if(root->left == NULL){
            struct Node* temp = root->right;
            free(root);
            return temp;
        }
        else if(root->right == NULL){
            struct Node* temp = root->left;
            free(root);
            return temp;
        }
        else{
            struct Node* temp = minValueNode(root->right);
            root->val  = temp->val;
            root->right = deleteNode(root->right,temp->val);
        }
    }

    return root;
}



int main(){
    struct Node *root = NULL;

    root = insert(root,8);
    root = insert(root,10);
    root = insert(root,12);
    root = deleteNode(root,10);

    cout<<"Inorder traversal: "<<endl;
    inOrder(root);

    return 0;
}