#ifndef BASE_H
#define BASE_H

using namespace std;

class Base{
    friend class Hetlist;
    protected:
        int result;
        string name;
    public:
        Base * next;
        enum outcome {Lose, Tie, Win};
        virtual int compare(char &){};
        void print();
};

void Base::print(){
    cout << "Base print:" << name << "result:" <<result <<  endl;
}

#endif
