#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<string> tokens = {"2","1","+","3","*"};
    list<int> st;
    for(string t : tokens){
        if(t == "+" || t == "-" || t == "*" || t == "/"){
            int b = st.back(); 
            st.pop_back();
            int a = st.back(); 
            st.pop_back();
            if(t == "+") st.push_back(a + b);
            else if(t == "-") st.push_back(a - b);
            else if(t == "*") st.push_back(a * b);
            else st.push_back(a / b);
        }
        else{
            st.push_back(stoi(t));
        }
    }
    cout << st.back();
}
