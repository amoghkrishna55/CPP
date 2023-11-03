#include<iostream>
using namespace std;

int sum=0;

void Hanoi(int n, char src, char aux, char dest){
    if(n==1){
        cout << "Moved disk " << n << " from " << src << " to " << dest << endl;
        sum++;
        return;
    }
    sum++; 
    Hanoi(n-1,src,dest,aux);
    cout << "Moved disk " << n << " from " << src << " to " << dest << endl;
    Hanoi(n-1,aux,src,dest);
}

int main(){
    int n;
    cin >> n;

    Hanoi(n,'A','B','C');
    cout << endl << sum;
}