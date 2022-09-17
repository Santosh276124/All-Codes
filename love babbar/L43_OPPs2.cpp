/*
#include<iostream>
using namespace std;

class Student
{
    private:

    string name;
    int age;
    int height;

    public:

    int getAge()
    {
       return this->age;
    }
};

class Human{

public:

int weight;

private:
int height;

private:
int age;

public:


int getAge()
{
    return this-> age;
}

void setWeight(int w)
{
   this->weight = w;
}


};


class Male : private Human
{
public:
string color;

void sleep()
{
    cout<< "male is sleeping"<<endl;
}

int getHeight()
{
    return this->height;
}


};

int main(){

Male m1;
cout<<m1.getHeight()<<endl;
cout<<m1.height<<endl;

  /*  
// Student first;
cout<<"sb shi hai"<<endl;

// Male m1;
// cout<<m1.height << endl;


Male object1;
cout<<object1.age << endl;
cout<<object1.weight << endl;
cout<<object1.height << endl;

cout << object1.color << endl;

object1.setWeight(84);
cout<<object1.weight << endl;
object1.sleep();


    return 0;
}


//single inheritance::::  A to B  (animal to dog)
// Multilevel inheritence :: A to B to C(animal -> dog -> germanShephered)

#include<iostream>
using namespace std;


class animal{

public:
int age;
int weight;

public:
void bark()
{
    cout<< "Barking:"<<endl;
}

};

class human{

    public:
    char color;

    public:
    void speak()
    {
        cout<<"Speaking: " << endl;
    }
};


class dog : public animal{


};

class germanShephered : public dog{

};

class hybrid : public animal, public human{


};


class A{

    public:
    void func1(){
        cout<< " inside function 1: " << endl;
    }
};

class B : public A{

public:
void func2(){
    cout<<"inside function 2: " << endl;
}
};

class C : public A{

public:
void func3(){
    cout<<"inside function 3: " << endl;
}


};



class A{

    public:
    void func(){
        cout<< " inside function A: " << endl;
    }
};

class B {

public:
void func(){
    cout<<"inside function B: " << endl;
}
};

class C : public A, public B {

};

int main(){
    
// hybrid obj1;

// cout<<obj1.age<<endl;
// obj1.bark();
// obj1.speak();

// A obj1;
// obj1.func1();

// cout << endl;

// B obj2;
// obj2.func1();
// obj2.func2();

// cout<< endl;

// C obj3;
// obj3.func1();
// obj3.func3();

// cout<<endl;

C obj;
// obj.func(); // ambiguity  error:

obj.A :: func();
obj.B:: func();


    return 0;
}
*/
