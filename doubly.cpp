#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *next;
    Node *previous;

    Node(int val){
        data = val;
        next = NULL;
        previous = NULL;
    }

};

void insertAtTail(Node* &head, int val){
    Node* n = new Node(val);

    if(head == NULL){
        head = n;
        return;
    }
    
    Node* temp  = head;

    while(temp->next!=NULL){
        temp = temp->next;
    }
    
    temp->next = n;
    n->previous = temp;
}

void insertAtHead(Node* &head,int val){
    Node* n = new Node(val);

    if(head == NULL){
        head = n;
        return;
    }

    Node* temp = head;
    temp->previous = n;
    n->next = temp;
    n->previous = NULL;
    head=n;
}

void deleteNode(Node* &head, int val){
    Node* temp = head;
    while(temp->data != val){
        temp = temp->next;
    }
    // if(temp->next->next!=NULL || temp->previous->previous!=NULL){
    //     Node* toDelete = temp->next;
    //     Node* pp = temp->next->next;
    //     temp->next = pp;
    //     pp->previous = temp;
    //     delete toDelete;
    // }
    // else if(temp->next->next==NULL){
    //     Node* toDelete = temp->next;
    //     temp->next= NULL;
    //     delete toDelete;
    // }
    // else{
    //     return;
    // }
    if(temp->next!=NULL || temp->previous!=NULL){
        Node* toDelete = temp;
        temp->previous->next = temp->next;
        temp->next->previous = temp->previous;
        delete toDelete;
    }
    else if(temp->next == NULL){
        Node* toDelete =temp;
        temp->previous->next = NULL;
        delete temp;
    }
    else{
        return;
    }
}

void display(Node* head){
    Node* temp = head;

    while(temp != NULL){
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL";
}

void displayRev(Node* head){
    Node* temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    while(temp != NULL){
        cout << temp->data << " -> ";
        temp = temp->previous;
    }
    cout << "NULL";
}

int main(){
    Node *head=NULL;
    insertAtTail(head,3);
    insertAtTail(head,5);
    insertAtTail(head,9);
    display(head);
    cout << endl;
    displayRev(head);
    cout << endl;
    insertAtHead(head,2);
    display(head);
    cout << endl;
    deleteNode(head,5);
    display(head);
    cout << endl;
    deleteNode(head,9);
    display(head);
    cout << endl;

}