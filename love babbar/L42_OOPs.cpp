#include <iostream>
#include <cstring>


using namespace std;

class hero
{

    // properties:
private:
    int Health;

public:

char *name;
char Level;
static int timeToComplete;

// simple constructor::

hero()
{
    cout <<" Construcor is called: " <<endl;
    name = new char[100];
}

// parameterized constructor::

hero(int Health)
{
    cout << "this  -> " << this << endl;
    this -> Health = Health;
}

hero(int Health, char Level)
{
    this -> Level = Level;
    this -> Health = Health;
}

// Copy constructor::
hero(hero& temp)
{
    char *ch = new char[strlen(temp.name) + 1];
    strcpy(ch , temp.name);
    this->name = ch;

    cout << "copy constructor is called: " << endl;
    this -> Health = temp.Health;
    this-> Level = temp.Level;
}

void print()
{
    cout << endl;
    cout <<endl;
    cout << "[ Name is : " << this->name << ", ";
    cout << "health is : " << this->Health << ", ";
    cout << "level is : " << this->Level << " ]";
    cout << endl;
    cout << endl;
}

   

    int getHealth()
    {
        return Health;
    }

    char getLevel()
    {
        return Level;
    }

    void setHealth(int h)
    {
        Health = h;
    }
    void setLevel(char ch)
    {
        Level = ch;
    }
    void setName(char name[])
    {
        strcpy(this->name, name);
    }

    static int random()
    {
        return timeToComplete;
    }

// Destructror::
~hero()
{
    cout <<"destructor bhai called: " <<endl;
}


};

int hero :: timeToComplete = 5;

int main()
{

cout << hero::random() << endl;



/*
cout<< hero::timeToComplete << endl;

hero a;
cout << a.timeToComplete << endl;

hero b;
cout << a.timeToComplete<<endl;
cout<< b.timeToComplete<<endl;


/*
//static:
hero a;

//dynamically:
hero *b = new hero();

//manually destructor called::
delete b;

/*
hero Hero1;

Hero1.setHealth(12);
Hero1.setLevel('D');
char name[7] = "Babbar";

Hero1.setName(name);
// Hero1.print();

// use default copy constructor:
hero Hero2(Hero1);
// Hero2.print();

Hero1.name[0] = 'G';
Hero1.print();

Hero2.print();

Hero1 = Hero2;
Hero1.print();

Hero2.print();
*/










/*

hero S(70,'A');
S.print();

//Copy constructor::

hero R(S);
R.print();

// object created statically:
hero ramesh(10);
cout << "Address of ramesh " << &ramesh << endl;

//dynamically:
hero * h = new hero();





    
    // static allocation:

hero a;
a.setHealth(80);
a.setLevel('B');
cout << "level is "<< a.Level << endl;
cout << " health is " << a.getHealth() << endl;

// dynamically::

hero * b = new hero;
b->setHealth(70);
b->setLevel('A');

cout << "level is "<< (*b).Level << endl;
cout << " health is " << (*b).getHealth() << endl;

cout << "level is "<< b->Level << endl;
cout << " health is " << b->getHealth() << endl;



    // creation of object:

    // hero ramesh;
    // cout << "health is" << ramesh.getHealth() << endl;

    // ramesh.setHealth(70);
    // ramesh.Level = 'A';

    // // cout<< "size is : " << sizeof(h1)<<endl;
    // cout << "health is " << ramesh.getHealth() << endl;
    // cout << "level is " << ramesh.getLevel() << endl;
*/
    return 0;
}