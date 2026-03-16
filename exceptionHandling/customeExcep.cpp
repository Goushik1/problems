#include <iostream>
#include <exception>
using namespace std;

class MyException : public exception{
public:
    const char* what() const noexcept{
        return "negative salary not allowed";
    }
};

int main(){
    int salary;
    try{
        cin>>salary;
        if(salary < 0)
            throw MyException();
        cout<<"salary "<<salary<<endl;
    }
    catch(MyException &e){
        cout<<e.what()<<endl;
    }
}