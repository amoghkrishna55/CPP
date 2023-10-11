#include<iostream>
using namespace std;

void printSpiral(int arr[][4],int col, int row){
    int topRow=0, bottomRow = row-1;
    int leftCol = 0, rightCol = col-1;
    while(topRow<=bottomRow && leftCol<=rightCol){
        for(int i=leftCol;i<=rightCol;i++){
            cout << arr[topRow][i] << " ";
        }
        topRow++;
        for(int i=topRow;i<=bottomRow;i++){
            cout << arr[i][rightCol] << " ";
        }
        rightCol--;
        for(int i=rightCol;i>=leftCol;i--){
            cout << arr[bottomRow][i] << " ";
        }
        bottomRow--;
        for(int i=bottomRow;i>=topRow;i--){
            cout << arr[i][leftCol] << " ";
        }
        leftCol++;
    }
}

int main(){
    int arr1[4][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    printSpiral(arr1,4,4);
}