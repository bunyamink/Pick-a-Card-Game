#ifndef BASE_H
#define BASE_H

using namespace std;

class Base{
    public:
        int result;
        enum outcome {Lose, Tie, Win};
        virtual int compare()=0;
        void _insert();
        void display();
        Base();
};

#endif
