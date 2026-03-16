#include <iostream>
using namespace std;

int main(){
    int n;
    try{
        cin>>n;
        if(n<0)
            throw n;
        cout<<"number "<<n<<endl;
    }
    catch(int){
        cout<<"negative number not allowed"<<endl;
    }
}