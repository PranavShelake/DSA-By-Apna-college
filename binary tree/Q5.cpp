#include"binarytree.h"
#include<Queue>

void order_level_print(node* root){
    if(root==NULL){
        return ;
    }
    queue <node*> q;
    q.push(root);
    
    while(!q.empty()){
        if((q.front())->left!=NULL){
            q.push((q.front())->left);
        }
        if((q.front())->right!=NULL){
            q.push((q.front())->right);
        }
        cout<<(q.front())->data<<"->";
        q.pop();
    }
}

    void another_ways_order_level_print(node *root){
        if(root==NULL){
            return;
        }
        queue<node*>q;
        q.push(root);
        q.push(NULL);
        while(!q.empty()){
            if(q.front()==NULL){
                q.pop();
                cout<<endl;
                if(q.empty()){
                    return;
                }
                q.push(NULL);
            }
            if((q.front())->left!=NULL){
                q.push((q.front())->left);
            }
            if((q.front())->right!=NULL){
                q.push((q.front())->right);
            }
            cout<<(q.front()->data)<<"->";
            q.pop();
        }
    }

int main(){
    
    node* root=new node(5);
    node* rl=new node(3);
    node* rll=new node(1);
    node* rlll=new node(100);
    node* rllll=new node(10000);
    node* rlr=new node(4);
    node* rr=new node(10);
    node* rrr=new node(20);
    node* rrl=new node(8);

    root->left=rl;
    root->right=rr;
    rll->left=rlll;
    rlll->left=rllll;
    rl->left=rll;
    rl->right=rlr;
    rr->left=rrl;
    rr->right=rrr;

    order_level_print(root);    //using without null 
    another_ways_order_level_print(root);    //another ways using null between level
    return 0;
}