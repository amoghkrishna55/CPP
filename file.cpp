#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){
  ofstream onFile;
  string str;
  onFile.open("prac1.txt");
  getline(cin,str);
  onFile << str;

  onFile.close();

  ifstream inFile;
  string str1;
  inFile.open("prac1.txt");
  while(getline(inFile,str1)){
    cout << str1;
  }


  inFile.close();
}