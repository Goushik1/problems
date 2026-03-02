#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
struct Item {
    int value;
    int weight;
};
int main(){
    vector<Item> items = {{60,10},{100,20},{120,30}};
    int W = 50;
    sort(items.begin(), items.end(), [](Item a,Item b) {
        double r1=(double)a.value/a.weight;
        double r2=(double)b.value/b.weight;
        return r1>r2;
    });
    double maxValue=0.0;
    for(auto item: items){
        if(W >= item.weight){
            maxValue+= item.value;
            W-= item.weight;
        }else{
            maxValue+=((double)item.value/item.weight)*W;
            break;
        }
    }
    cout<<maxValue<<endl;
    return 0;
}