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

    int levelOrderSum(Node* root, int k) {
    if(root == NULL || k < 1) {
        return 0;
    }
    queue<Node*> q;
    q.push(root);
    int level = 1;
    int sum = 0;
    int nodesAtLevel = 1;
    int nodesAtNextLevel = 0;
    bool test = false;
    while(!q.empty()){
        Node* node = q.front();
        q.pop();
        if(node != NULL){
            if(node->left){
                q.push(node->left);
                nodesAtNextLevel++;
            }
            if(node->right){
                q.push(node->right);
                nodesAtNextLevel++;
            }
            if(level == k){
                sum += node->val;
            }
            nodesAtLevel--;
            if(nodesAtLevel == 0){
                level++;
                nodesAtLevel = nodesAtNextLevel;
                nodesAtNextLevel = 0;
                test = false;
            }
            if(level > k){
                break;
            }
        }
        else{
            nodesAtLevel--;
            if(!q.empty()){
                q.push(NULL);
                nodesAtNextLevel++;
            }
            if(test){
                break;
            }
        }
    }
    return sum;
}
};

int main(){
    Node* root = new Node(21);
    root->left = new Node(15);
    root->right = new Node(32);
    root->left->left = new Node(10);
    root->left->right = new Node(18);
    root->left->right->left = new Node(17);
    root->left->right->right = new Node(20);
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
    cout << endl << root->levelOrderSum(root,3);
}