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
int height(Node* root){
    if(!root) return 0;
    int left = height(root->left);
    int right = height(root->right);
    return 1 + max(left,right); //in terms of nodes
}
int main(){
    Node* root=new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);
    root->left->left=new Node(4);
    root->left->right=new Node(5);
    cout<<height(root);
}