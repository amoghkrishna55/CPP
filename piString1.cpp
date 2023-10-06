#include<iostream>
#include<cstring>
using namespace std;

void pi(string line){
    if(line.length()==0){
        return;
    }
    if(line[0]=='p' && line[1]=='i'){
        cout << "3.14";
        pi(line.substr(2));
    }
    else{
        cout << line[0];
        pi(line.substr(1));
    }
}

int main(){
    string line;
    cin >> line;
    pi(line);
}