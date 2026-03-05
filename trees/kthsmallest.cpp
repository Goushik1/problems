#include <iostream>
using namespace std;
struct Node{
    int data;
    Node* left;
    Node* right;
    Node(int d){
        data = d;
        left = right = NULL;
    }
};

int count = 0;
int ans = -1;
void inorder(Node* root,int k){
    if(!root || ans != -1) return;
    inorder(root->left,k);
    count++;
    if(count == k){
        ans = root->data;
        return;
    }
    inorder(root->right,k);
}

int main(){
    Node* root=new Node(1);
    root->left=new Node(0);
    root->right=new Node(3);
    root->right->left=new Node(2);
    root->right->right=new Node(5);

    inorder(root,3);
    cout<<ans;
}