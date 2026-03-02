#include <iostream>
#include <queue>

using namespace std;
class stack{
    public:
    queue<int> q1;
    queue<int> q2;
    void push(int x){
        q1.push(x);
    }
    void pop(){
        if(q1.empty()) return;
        while(q1.size()>1){
            q2.push(q1.front());
            q1.pop();
        }
        q1.pop();
        swap(q1,q2);
    }   
    int top(){
        if(q1.empty()) return -1;
        while(q1.size()>1){
            q2.push(q1.front());
            q1.pop();
        }
        int topEle = q1.front();
        q2.push(topEle);
        q1.pop();
        swap(q1,q2);
        return topEle;
    }
};
int main(){
    stack s;
    s.push(3);
    s.push(2);
    s.push(1);
    s.pop();
    cout<<s.top();
}