#include <iostream>
#include <stdexcept>
using namespace std;

int convert(string s){
    for(char c:s)
        if(!isdigit(c))
            throw invalid_argument("not numeric");
    return stoi(s);
}

int main(){
    string s;
    cin>>s;
    try{
        cout<<convert(s)<<endl;
    }
    catch(invalid_argument &e){
        cout<<e.what()<<endl;
    }
}