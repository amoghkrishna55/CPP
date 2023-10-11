#include<iostream>
using namespace std;

int main(){
    int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int max_sum = 0;
    for(int i=0; i<3; i++){
        int sum = 0;
        for(int j=0; j<3; j++){
            sum += arr[i][j];
        }
        if(sum > max_sum){
            max_sum = sum;
        }
    }
    cout << "Maximum sum of a row: " << max_sum << endl;
    return 0;
}