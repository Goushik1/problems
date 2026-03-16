#include <iostream>
using namespace std;

class Test{
public:
    Test(){
        cout<<"constructor called"<<endl;
    }
    ~Test(){
        cout<<"destructor called"<<endl;
    }
};

int main(){
    Test* t = new Test();
    delete t;

}