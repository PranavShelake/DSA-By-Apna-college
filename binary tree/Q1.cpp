#include"binarytree.h"

int maxDepth(node* root) {
        if(root==NULL){
            return 0;
        }
        int lh=maxDepth(root->left);
        int rh=maxDepth(root->right);
        return 1+max(lh,rh);
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
    disp(root);
    cout<<endl;
    cout<<maxDepth(root);

    return 0;
}