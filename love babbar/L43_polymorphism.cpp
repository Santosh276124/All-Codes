/*

#include<iostream>
using namespace std;

class A{

public:
void sayHello(){
    cout<<"Hello Love Babbar: "<<endl;
}

int sayHello(char name){
    cout<<"Hello Love Babbar: "<<endl;
    return 1;
}


void sayHello(string name){
    cout<<"Hello : " << name <<endl;
}

};

class B{

public:
int a;
int b;

public:
int add(){
    return a+b ;
}

void operator+ (B &obj){

    int val1 = this -> a;
    int val2 = obj.a;

    cout << "output: " << val2 - val1 << endl;

    cout<<"hello love babbar: " << endl;
}

void operator() (){

    cout<<"main bracket hu : " << this-> a<<endl;
}



};

int main(){
    
    B obj1,obj2;

    obj1.a = 4;
    obj2.a = 7;

    obj1 + obj2;

    obj1();
    
    return 0;
}
*/

// Run time polymorphism::

#include<iostream>
using namespace std;

class Animal {
public :
void speak(){

    cout<<"Speaking: " << endl;
}

};

class dog : public Animal{

public:
void speak(){
   cout<<"Barking: " << endl;
}

};

int main(){
    
    dog obj;
    obj.speak();






    return 0;
}

