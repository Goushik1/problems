#include <iostream>
#include <vector>
#include <memory>
using namespace std;

class Media{
public:
    virtual void play(){
        cout<<"media"<<endl;
    }
    virtual ~Media(){}
};

class Audio : public Media{
public:
    void play(){
        cout<<"audio playing"<<endl;
    }
};

class Video : public Media{
public:
    void play(){
        cout<<"video playing"<<endl;
    }
};

int main(){
    vector<unique_ptr<Media>> v;
    v.push_back(make_unique<Audio>());
    v.push_back(make_unique<Video>());
    for(auto &m : v)
        m->play();
}