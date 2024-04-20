#include"binarytree.h"

int balance_tree(node * root);
int height(node* root);

int balance_tree(node* root){
    int lh,rh;
    if(root==NULL){
        cout<<"0"<<endl;
    }
    if(root->left!=NULL){
        lh=height(root->left);
    }
    else{
        lh=0;
    }
    if(root->right!=NULL){
        rh=height(root->right);
    }
    else{
        rh=0;
    }
    return lh-rh;
}

int height(node* root){
    if(root==NULL){
        return 1;
    }
    int rh=height(root->right);
    int lh=height(root->left);
    return 1+max(lh,rh);
}

int main(){

    node* root=new node(5);
    root->left=new node(3);
    root->left->left=new node(1);
    root->left->left->left=new node(-1);
    root->left->right=new node(4);
    root->right=new node(10);
    root->right->right=new node(20);
    root->right->left=new node(8);

    disp(root);
    cout<<endl;

    cout<<balance_tree(root);

    return 0;
}