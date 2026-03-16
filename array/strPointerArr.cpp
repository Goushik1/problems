#include <iostream>
using namespace std;

int main(){
    string a="apple";
    string b="banana";
    string c="orange";
    string* arr[3];
    arr[0]=&a;
    arr[1]=&b;
    arr[2]=&c;
    for(int i=0;i<3;i++){
        cout<<*arr[i]<<endl;
    }
}