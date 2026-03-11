#include <iostream>
#include <stdexcept>
using namespace std;

class Rectangle{
private:
    double width;
    double height;
public:
    void setWidth(double w){
        if(w<=0) throw invalid_argument("invalid");
        width=w;
    }
    void setHeight(double h){
        if(h<=0) throw invalid_argument("invalid");
        height=h;
    }
    double area(){
        return width*height;
    }
};

int main(){
    Rectangle r;
    try{
        r.setWidth(5);
        r.setHeight(-3);
    }
    catch(exception &e){
        cout<<"invalid rectangle"<<endl;
    }
}