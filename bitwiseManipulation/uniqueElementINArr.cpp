#include <bits/stdc++.h>
using namespace std;
int main(){
    int arr[] = {2,3,4,4,2};
    int n = 0;
    for(int val : arr){
        n ^= val;
    }
    cout<<n;
}