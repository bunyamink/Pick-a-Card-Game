//Bünyamin İbrahim Kurt 150140145
#include <iostream>
#include <fstream>
#include "Base.h"
#include "Blue.h"
using namespace std;

class Hetlist{
    Base *head;
    public:
        Hetlist(){head = 0;}
        void _insert(Base *);
        void displayResult();
};

void Hetlist::_insert(Base * b){
    if(head){
        b->next = head; // if list is not empty
    }else{
        b->next = 0; // if empty insert first element zero
    }
    head = b;
}

void Hetlist::displayResult(){
    Base * basePtr;
    if(head){
        basePtr = head;
        while(basePtr){
            basePtr->print();
            basePtr = basePtr->next;
        }
    }else{
        cout << "List is empty" << endl;
    }
}

int main()
{
    Hetlist hetlist;
    Blue *blue1 = new Blue("Blue1", 2);
    hetlist._insert(blue1);
    hetlist.displayResult();

    /*char data[100];
    Base::outcome result;
    result = Base::Tie;
    cout << result << endl;*/
    /*string line;
    ifstream file("deck.txt");
    file >> data;
    cout << data;
    file.close();*/

    /*if(file.is_open()){
        while(std::getline(file,line)){
            cout << line << endl;
        }
        file.close();
    }else{
        cout << "Deck.txt is not open" << endl;
    }*/

    return 0;
}
