#include <iostream>
#include <fstream>
using namespace std;

int main(){
    ifstream f("data.txt");
    try{
        if(!f)
            throw "file error";
        int a,b;
        f>>a>>b;
        if(b==0)
            throw "division error";
        cout<<a/b<<endl;
    }
    catch(const char* e){
        cout<<e<<endl;
    }
}