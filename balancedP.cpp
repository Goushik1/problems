#include <bits/stdc++.h>
using namespace std;

int main() {
    list<char> s;
    string str = "{[{()]}";
    if(str.length() <= 1){
        return 0;
    }
    for(char c : str){
        if(c == '{' || c=='[' || c=='('){
            s.push_back(c);
        }else if(c == '}' && s.back() == '{' || c == ']' && s.back() == '[' || c == ')' && s.back() == '(' ){
            s.pop_back();
         }else{
            cout<<"not balanced";
            return 0;
        }
    }
    if(s.empty()){
        cout<<"Balanced";
    }else{
        cout<<"not balanced";
    }
}