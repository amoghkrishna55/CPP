#include<iostream>
using namespace std;

void printWave(int arr[][3], int col, int row){
    int i=0,j=0;
    for(i=0;i<col;i++){
        if(j>0){
            for(j=row-1;j>=0;j--){
                cout << arr[j][i] << " ";
            }
        }
        else{
            for(j=0;j<row;j++){
                cout << arr[j][i] << " ";
            }
        }
        cout << endl;
    }
}

int main(){
    int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    printWave(arr,3,3);
}