#include <iostream>
using namespace std;
int main(){
    int arr[] = {1,2,3,4,5};
    int tem[5];
    int k = 3;
    for(int i = 0;i<5;i++){
        tem[(k+i)%5] = arr[i];
    }
    for(int n : tem){
        cout<<n<<" ";
    }
}