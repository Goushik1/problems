#include <iostream>
#include <fstream>
using namespace std;

void openFile(){
    ifstream f("test.txt");
    if(!f)
        throw string("file cannot open");

    cout<<"file opened"<<endl;
}

int main(){
    try{
        openFile();
    }
    catch(string s){
        cout<<s<<endl;
    }
}