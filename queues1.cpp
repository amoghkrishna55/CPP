// You are using GCC
#include<iostream>
using namespace std;

class Queue{
    public:
    int *arr;
    int size;
    int top, rear;
    
    Queue(){
        size=5;
        arr = new int[size];
        top = -1;
        rear = -1;
    }
    
    void enQueue(int val){
        if(rear==size-1){
            cout << "Queue is full.";
            return;
        }
        if(rear==top==-1){
            top++;
            rear++;
            arr[rear] = val;
        }
        rear++;
        arr[rear] = val;
        cout << val << " is inserted in the queue." << endl;
    }
    
    void deQueue(){
        if(rear==top){
            cout << "Queue is empty." << endl;
            return;
        }
        int del = arr[0];
        for(int i=0;i<rear;i++){
            arr[i] = arr[i+1];
        }
        rear--;
        cout << "Deleted number is: " << del << endl;
    }
    
    void display(){
        if(rear==top){
            cout << "Queue is empty.";
            return;
        }
        cout << "Elements in the queue are: ";
        for(int i=top;i<=rear;i++){
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main(){
    Queue q;
    int a,b;
    while(cin>>a){
        if(a==1){
            cin >> b;
            q.enQueue(b);
        }
        else if(a==2){
            q.deQueue();
        }
        else if(a==3){
            q.display();
        }
        else{
            cout << "Invalid option.";
            break;
        }
    }
}