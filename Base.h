#ifndef BASE_H
#define BASE_H
#include "Hetlist.h"
using namespace std;

class Base{
    friend class Hetlist;
    int result;
    string name;
    Base * next;
    public:
        enum outcome {Lose, Tie, Win};
        virtual int compare()=0;
        void print();
        Base(const string &, int);
};

Base::Base(const string &_name, int _result){
    name = _name;
    result = _result;
}

int Base::compare(){
    cout<< "Base compare" << endl;
    return 1;
}

void Base::print(){
    cout << "Base print:" << name << "result:" <<result <<  endl;
}

#endif
