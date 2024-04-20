#include<iostream>
#include<bits\stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node* right;
    node *left;
    node(int data):data(data){
        right=NULL;
        left=NULL;
    }
    ~node(){
        data=0;
        delete right;
        delete left;
    }
};
node* create_node(int data){
    node* n=new node(data);
    return n;
}

void insert_node(int data){
    node* n=create_node(data);

}
void disp(node* root){
    if(root==NULL){
        return;
    }
    disp(root->left);
    cout<<root->data<<"->";
    disp(root->right);
}

int cal_childnode(node * root){
    static int child=0;
    if(root==NULL){
        return child;
    }
    if(root->left==NULL && root->right==NULL){
        return child++;
    }
    cal_childnode(root->left);
    cal_childnode(root->right);
}


