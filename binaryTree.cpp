#include<iostream>
#include<queue>
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
        if(temp->left==NULL && temp->right==NULL){
            cout << temp->val << "->";
            return;
        }
        cout << temp->val << "->";
        if(temp->left!=NULL) display(temp->left);
        if(temp->right!=NULL) display(temp->right);
    }

    void preOrder(Node* head){
        if(head==NULL) return;
        cout << head->val << "->";
        preOrder(head->left);
        preOrder(head->right);
    }

    void inOrder(Node* head){
        if(head==NULL) return;
        inOrder(head->left);
        cout << head->val << "->";
        inOrder(head->right);
    }

    void postOrder(Node* head){
        if(head==NULL) return;
        postOrder(head->left);
        postOrder(head->right);
        cout << head->val << "->";
    }

    void levelOrder(Node* root){
        if(root==NULL) return;

        queue<Node*> q;
        q.push(root);
        q.push(NULL);

        while(!q.empty()){
            Node* node = q.front();
            q.pop();
            if(node!=NULL){
                cout << node->val << "->";
                if(node->left){
                    q.push(node->left);
                }
                if(node->right){
                    q.push(node->right);
                }
            }
            else if(!q.empty()){
                q.push(NULL);
            }
        }
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
    //root->left->left->left = new Node(8);
    root->display(root);
    cout << endl;
    root->preOrder(root);
    cout << endl;
    root->inOrder(root);
    cout << endl;
    root->postOrder(root);
    cout << endl;
    root->levelOrder(root);
}