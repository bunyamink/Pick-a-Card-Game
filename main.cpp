//Bünyamin İbrahim Kurt 150140145
#include <iostream>
#include <fstream>
#include "Base.h"
using namespace std;

class Hetlist{
    Base *head;
    public:
        Hetlist(){head = 0;}
        void _insert(Base *);
        void display();
};

int main()
{
    char data[100];
    /*Base::outcome result;
    result = Base::Tie;
    cout << result << endl;*/
    string line;
    ifstream file("deck.txt");
    file >> data;
    cout << data;
    file >> data;
    cout << data << endl;

   // close the opened file.
   file.close();

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
