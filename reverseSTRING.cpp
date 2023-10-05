#include <iostream>
#include <cstring>
using namespace std;

char ans[100] = "";

char* reverse(char* line, int start = 0){
    if(start < strlen(line)){
        char div = line[start];
        reverse(line, ++start);
        strcat(ans,&div);
    }
    return ans;
}

int main(){
    char line[100];
    cin >> line;
    cout << reverse(line);
    return 0;
}