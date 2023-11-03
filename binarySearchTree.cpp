#include<iostream> 
using namespace std;

class Node{
    public:
    int val;
    Node* left;
    Node* right;

    Node(int val){
        this->val = val;
        left = NULL;
        right = NULL;
    }
};

Node* searchInBST(Node* root, int key){
    if(root==NULL){
        return NULL;
    }
    if(root->val==key){
        return root;
    }
    else if(key<root->val){
        return searchInBST(root->left,key);
    }
    return searchInBST(root->right,key);
}

Node* insertBST(Node* root,int val){
  if(root==NULL){
    return new Node(val);
  }

  if(val< root->val){
    root->left = insertBST(root->left,val);
  }

  else{
    root->right = insertBST(root->right,val);
  }
  return root;
}

void inOrder(Node* head){
    if(head==NULL) return;
    inOrder(head->left);
    cout << head->val << "->";
    inOrder(head->right);
}

int count(Node* root){
    if(root==NULL){
        return 0;
    }
    int sum = 1;
    if(root->left!=NULL) sum += count(root->left);
    if(root->right!=NULL) sum += count(root->right);
    return sum;
}

// Node* deleteInBST(Node* root, int val){
//     if(val>root->val){
//         root->right = deleteInBST(root->right,val);
//     }
//     else if(val<root->val){
//         root->left = deleteInBST(root->left,val);
//     } 
//     else{
//         if(root->left==NULL){
//             Node* temp = root->right;
//             delete root;
//             return temp;
//         }
//         else if(root->right==NULL){
//             Node* temp = root->left;
//             delete temp;
//             return temp;
//         }
//     }
// }



int main(){

    int a,b;
    Node* root = NULL;
    cin >> a;
    while(a--){
        cin >> b;
        root = insertBST(root,b);
    }
    inOrder(root);
    cout << endl << endl;
    cout << count(root) << endl;
    if(searchInBST(root,3)){
        cout << "yes";
    }
    else{
        cout << "NO";
    }
}