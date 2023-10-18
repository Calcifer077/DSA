#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;
    
    Node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};

int countnodes(Node* root){
    if(root == NULL){
        return 0;
    }
    return countnodes(root->left) + countnodes(root->right) + 1;
}

int sumnodes(Node* root){
    if(root == NULL){
        return 0;
    }
    return sumnodes(root->left) + sumnodes(root->right) + root->data;
}
int main(){
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);
    
    cout<<countnodes(root)<<endl;
    cout<<sumnodes(root)<<endl;
    return 0;
}
