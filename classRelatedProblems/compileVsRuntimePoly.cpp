#include <iostream>
#include <cmath>
using namespace std;

class MathOps{
public:
    static int pow(int a,int b){
        int r=1;
        for(int i=0;i<b;i++) r*=a;
        return r;
    }
    static double pow(double a,double b){
        return pow(a,b);
    }
};

class Function{
public:
    virtual double evaluate(double x){
        return x;
    }
    virtual ~Function(){}
};

class Square : public Function{
public:
    double evaluate(double x){
        return x*x;
    }
};

class Cube : public Function{
public:
    double evaluate(double x){
        return x*x*x;
    }
};

int main(){
    cout<<MathOps::pow(2,3)<<endl;
    cout<<MathOps::pow(2.5,2.0)<<endl;
    Function* f1 = new Square();
    Function* f2 = new Cube();
    cout<<f1->evaluate(3)<<endl;
    cout<<f2->evaluate(3)<<endl;
}