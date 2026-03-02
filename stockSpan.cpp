#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> price= {12,14,17,9,21};
    vector<int> ans(price.size());
    
    stack<int> s;
    for(int i = 0;i <= price.size()-1;i++){
        while(!s.empty() && price[s.top()] <= price[i]){
            s.pop();
        }
        if(s.empty()){
            ans[i] = i + 1;
        }else{
            ans[i] = i-s.top();
        }
        s.push(i);
    }
    for(int n : ans){
        cout<<n<<" ";
    }
}
