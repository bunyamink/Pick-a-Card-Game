//Bünyamin İbrahim Kurt 150140145
#include <iostream>
#include <fstream>
#include "Base.h"
#include "Blue.h"
#include "Red.h"
#include "Darkred.h"
#include "Green.h"
using namespace std;

class Hetlist{
    public:
        Base *head;
        Hetlist(){head = 0;}
        void _insert(Base *);
        //void displayResult();
};

void Hetlist::_insert(Base * b){
    if(head){
        b->next = head; // if list is not empty
    }else{
        b->next = 0; // if empty insert first element zero
    }
    head = b;
}

void displayResult(Hetlist *);

void displayResult(Hetlist *ht){
    Base * basePtr;
    if(ht->head){
        basePtr = ht->head;
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
    Hetlist hetlist1;
    Hetlist hetlist2;
    //Blue *blue1 = new Blue();
    //hetlist._insert(new Blue());
    //displayResult(&hetlist);

    /*Base::outcome result;
    result = Base::Tie;
    cout << result << endl;*/

    char data[100];
    char p1[20];
    char p2[20];
    ifstream file("deck.txt");
    int i = 0;
    while(file.peek()!='\n'){
        file >> data[i];
        p1[i] = data[i];
        i++;
    }
    i = 0;
    while(!file.eof()){
        file >> data[i];
        p2[i] = data[i];
        i++;
    }
    file.close();

    cout << "Player1: ";
    for(i = 0; i < 10; i++){
        cout << p1[i] << " ";
        if(p1[i] == 'R'){
            hetlist1._insert(new Red());
        }else if(p1[i] == 'D'){
            hetlist1._insert(new Darkred());
        }else if(p1[i] == 'G'){
            hetlist1._insert(new Green());
        }else{
            hetlist1._insert(new Blue());
        }
    }

    cout << "\nPlayer2: ";
    for(i = 0; i < 10; i++){
        cout << p2[i] << " ";
        if(p2[i] == 'R'){
            hetlist2._insert(new Red());
        }else if(p2[i] == 'D'){
            hetlist2._insert(new Darkred());
        }else if(p2[i] == 'G'){
            hetlist2._insert(new Green());
        }else{
            hetlist2._insert(new Blue());
        }
    }



    return 0;
}
