#ifndef BLUE_H
#define BLUE_H

using namespace std;

class Blue: public Base{
    string name;
    public:
        int compare();
        //void print();
        Blue(const string &, int);
};

Blue::Blue(const string &_name,int a):Base(_name,a){
    name = _name;
}

int Blue::compare(){
    cout<<"Blıe compare" << endl;
    return 2;
}

/*void Blue::print(){
    Base::print();
    cout << "Blue print:" << name << endl;
}*/

#endif
