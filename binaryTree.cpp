#include<iostream>
using namespace std;

class Node{
    public:
    int val;
    Node* left;
    Node* right;

    Node(int val){
        this->val = val;
        left = right = NULL;
    }

    void display(Node* root){
        Node* temp = root;
        if(temp->left==NULL || temp->right==NULL){
            cout << temp->val << "->";
            return;
        }
        cout << temp->val << "->";
        display(temp->left);
        display(temp->right);
    }
};

int main(){
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);
    root->display(root);
}