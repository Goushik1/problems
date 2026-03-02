#include <bits/stdc++.h>
using namespace std;
int main() {
    int arr[] = {1,0,2,1};
    int l = 0, j = 3;
    int i = 0;
    while(i <= j){
        if(arr[i] ==0){
            swap(arr[l],arr[i]);
            l++;
            i++;
        }
        else if(arr[i] ==2){
            swap(arr[i],arr[j]);
            j--;
        }
        else{
            i++;
        }
    }
    for(int k=0;k<4;k++){
        cout<<arr[k]<<endl;
    }
}
