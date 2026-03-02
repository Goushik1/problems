#include <bits/stdc++.h>
using namespace std;

void rev(string &s,int i){
    if(i >= s.size()-i-1){
        return;
    }
    swap(s[i],s[s.size()-i-1]);
    rev(s,i+1);
}
int main() {
    string s = "reverse";
    rev(s,0);
    cout<<s;
}
