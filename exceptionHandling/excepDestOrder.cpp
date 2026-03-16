#include <iostream>
using namespace std;

class A{
public:
    A(){ 
        cout<<"A created"<<endl; 
    }
    ~A(){ 
        cout<<"A destroyed"<<endl; 
    }
};

class B{
public:
    B(){ 
        cout<<"B created"<<endl; 
    }
    ~B(){ 
        cout<<"B destroyed"<<endl; 
    }
};

int main(){
    try{
        A a;
        {
            B b;
            throw 1;
        }
    }
    catch(int){
        cout<<"exception caught"<<endl;
    }
}