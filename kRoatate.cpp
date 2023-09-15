#include<iostream>
using namespace std;

class Node{
    public:
    int val;
    Node* next;

    Node(int val){
        this->val=val;
        next = NULL;
    }
};

void insertNode(Node* &head, int val){
    Node* n = new Node(val);

    if(head==NULL){
        head = n;
        return;
    }

    Node* temp = head;
    while(temp->next!=NULL){
        temp = temp->next;
    }
    temp->next = n;
}

void displayNode(Node* head){
    Node* temp = head;
    while(temp!=NULL){
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

void kRotateNode(Node* &head, int k){
    if(head->next==NULL){
        return;
    }
    Node* temp = head;
    Node* anchor = head;
    Node* lastNode = NULL;
    while(1){
        anchor=temp;
        for(int i=1;i<k-1;i++){
            if(temp->next->next!=NULL && temp->next!=NULL){
                temp = temp->next;
            }
            else{
                return;
            }
        }
        Node* current = temp;
        temp = temp->next->next;
        current->next->next = anchor;
        if(anchor == head){
            head = current->next;
            lastNode = current;
            current->next = temp;
        }
        else{
            lastNode->next = current->next;
            lastNode = current;
            current->next = temp;
        }
    }
}

int main(){
    Node* head = NULL;
    int sizeOfNode,temp;
    cin >> sizeOfNode;
    if(sizeOfNode<=0){
        cout << "Invalid" << endl;
        return 0;
    }
    while(sizeOfNode--){
        cin >> temp;
        insertNode(head,temp);
    }
    cin >> temp;
    kRotateNode(head,temp);
    displayNode(head);
}