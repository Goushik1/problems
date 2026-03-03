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
int ans = 0;
int diameter(Node* root){
    if(!root) return 0;
    int left = diameter(root->left);
    int right = diameter(root->right);
    ans = max(ans,left+right); //in terms of edges
    return 1 + max(left,right);
}
int main(){
    Node* root=new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);
    root->left->left=new Node(4);
    root->left->right=new Node(5);
    diameter(root);
    cout<<ans;
}