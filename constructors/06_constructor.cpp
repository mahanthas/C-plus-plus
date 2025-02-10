/*
Abstract Class:
Create an abstract class Media with a pure virtual function play(). Derive classes Audio and Video that implement the play() function. Demonstrate polymorphism by calling play() from base class pointers.
*/
#include<bits/stdc++.h>
using namespace std;

class Media{
    public:
    Media(){
        cout<<"I am Media Constructor"<<endl;
    }
    virtual void play() = 0;
    virtual ~Media(){
        cout<<"I am Media Destructor"<<endl;
    }
};
class Audio:public Media{
    public:
    Audio(){
        cout<<"I am Audio Constructor"<<endl;
    }
    void play() override{
        cout<<"Audio is playing ...."<<endl;
    }
    virtual ~Audio(){
        cout<<"I am Audio Destructor"<<endl;
    }
};
class Video:public Media{
    public:
    Video(){
        cout<<"I am Video Constructor"<<endl;
    }
    void play() override{
        cout<<"Video is playing ...."<<endl;
    }
    virtual ~Video(){
        cout<<"I am Video Destructor"<<endl;
    }
};

int main(){
    Media* mediaptr;
    mediaptr = new Audio();
    mediaptr->play();
    delete mediaptr;
    mediaptr = new Video();
    mediaptr->play();
    delete mediaptr;
}