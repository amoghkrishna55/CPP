#include<iostream>
#include<cstring>
using namespace std;

char ans[100] = "";

void pi(char* line, int start = 0) {
    if (start < strlen(line)) {
        if (line[start] == 'p' && line[start + 1] == 'i') {
            strcat(ans, "3.14");
            pi(line, start + 2);
        }
        else {
            char temp[2];
            temp[0] = line[start];
            temp[1] = '\0';
            strcat(ans, temp);
            pi(line, start + 1);
        }
    }
    else {
        return;
    }
}

int main() {
    char line[100];
    cin >> line;
    pi(line);
    cout << ans;
    return 0;
}