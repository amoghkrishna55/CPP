#include<iostream>
using namespace std;

class Node{
    public:
    int val;
    Node* next;

    Node(int val){
        this->val = val;
        next = NULL;
    }
};

void ins(Node* &head, int val){
    Node* newNode = new Node(val);

    if(head==NULL){
        head=newNode;
        return;
    }

    Node* temp = head;
    while(temp->next!=NULL){
        temp = temp->next;
    }
    temp->next = newNode;
}

void disp(Node* head){
    Node* temp = head;
    while(temp!=NULL){
        cout << temp->val << "->";
        temp = temp->next;
    }
    cout << "NULL";
}

int main(){
    Node* head = NULL;
    ins(head,8);
    ins(head,4);
    ins(head,1);
    ins(head,9);
    disp(head);
}