#include <iostream>
using namespace std;

double add(double a,double b){ return a+b; }
double sub(double a,double b){ return a-b; }
double mul(double a,double b){ return a*b; }
double divi(double a,double b){ return a/b; }

int main(){
    int ch;
    double a,b;
    cout<<"1 -> +, 2 -> -, 3 -> *, 4 -> /"<<endl;
    cin>>ch;
    cout<<"enter numbers"<<endl;
    cin>>a>>b;
    double (*fp)(double,double);
    if(ch==1) fp=add;
    if(ch==2) fp=sub;
    if(ch==3) fp=mul;
    if(ch==4) fp=divi;

    if(fp!=nullptr)
        cout<<fp(a,b)<<endl;
    else
        cout<<"invalid choice"<<endl;
}