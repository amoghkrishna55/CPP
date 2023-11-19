#include<iostream>
using namespace std;

class Tree{
    public:
    int val;
    Tree* left;
    Tree* right;

    Tree(int val){
        this->val = val;
        left = right = NULL;
    }
};

Tree* insert(Tree* root, int val){
    if(root==NULL){
        return new Tree(val);
    }

    if(root->val>val){
        root->left = insert(root->left,val);
    }
    else{
        root->right = insert(root->right,val);
    }
    return root;
}


void inOrder(Tree* root){
    if(root==NULL){
        return;
    }
    inOrder(root->left);
    cout << root->val << " ";
    inOrder(root->right);
}

void preOrder(Tree* root){
    if(root==NULL){
        return;
    }
    cout << root->val << " ";
    inOrder(root->left);
    inOrder(root->right);
}

bool search(Tree* root,int val){
    if(root==NULL){
        return false;
    }
    else if(root->val==val){
        return true;
    }

    if(root->val>val){
        return search(root->left,val);
    }
    return search(root->right,val);
}

int main(){
    Tree* root = NULL;
    int a,b,x,key;
    cin >> a;
    int* arr = new int[a];
    for(int i=0;i<a;i++){
        cin >> arr[i];
    }
    cin >> key;
    for(int i=0;i<a;i++){
        if(arr[i]!=key){
            root = insert(root,arr[i]);
        }
    }
    inOrder(root);
    if(search(root,21)){
        cout << "uuuuu";
    }
    else{
        cout << " ppppppp";
    }
}