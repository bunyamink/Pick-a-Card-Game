#ifndef BASE_H
#define BASE_H
#include "Hetlist.h"
using namespace std;

class Base{
    friend class Hetlist;
    int result;
    Base * next;
    public:
        enum outcome {Lose, Tie, Win};
        virtual int compare()=0;
        Base();
};

#endif
