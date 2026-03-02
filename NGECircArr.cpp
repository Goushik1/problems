#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> arr= {5,8,2,1,7};
    vector<int> ans(arr.size(),-1);
    
    stack<int> s;
    for(int i = arr.size()-1;i>=0;i--){
        while(!s.empty() && s.top() <= arr[i]){
            s.pop();
        }
         if(!s.empty()){
            ans[i] = s.top();
        }
        s.push(arr[i]);
    }
    for(int i = arr.size()-1;i>=0;i--){
        if(ans[i] == -1){
            while(!s.empty() && s.top() <= arr[i]){
                s.pop();
            }
            if(!s.empty()){
                ans[i] = s.top();
            }
        }
        s.push(arr[i]);
    }
    for(int n : ans){
        cout<<n<<" ";
    }
}
