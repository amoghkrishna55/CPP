#include<iostream>
#include<sstream>
#include<vector>
using namespace std;

int main(){
    string line;
    getline(cin, line);
    istringstream iss(line);
    int num;
    vector<int> v;
    while(iss >> num){
        v.push_back(num);
    }
    int limit;
    cin >> limit;
    int truck = 0;
    int start = 0;
    int end = v.size()-1;
    while(start < end){
        if(v[start] ==  0){
            start++;
            continue;
        }
        if(v[end] == 0){
            end--;
            continue;
        }
        if(v[start] + v[end] <=limit){
            start++;
        }
        end--;
        truck ++;
    }
    cout << truck;
}