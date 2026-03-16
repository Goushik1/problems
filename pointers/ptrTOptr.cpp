#include <iostream>
using namespace std;

void change(int **p){
    **p = 50;
}

int main(){
    int x = 10;
    int *p = &x;
    int **pp = &p;
    change(pp);
    cout<<x<<endl;
}