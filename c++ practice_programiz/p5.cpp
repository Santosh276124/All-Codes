#include<iostream>
#include<cmath>
using namespace std;
int main(){
    
    float a, b , c, x1 , x2 , disciminant, realPart, imaginaryPart;
    cout<<" enter coefficients a, b, and c:";
    cin>> a >> b >> c;
    disciminant = b*b - 4*a*c;

    if(disciminant > 0){
        
        x1 = (-b + sqrt(disciminant)) / (2*a );
        x2 = (-b - sqrt(disciminant)) / (2*a );

       cout << "roots are real and diiferent ." <<endl;
       cout<<"x1 = " << x1 << endl;
       cout<<"x2 = " << x2 << endl;
    }
    else if (disciminant == 0){

       cout<<"roots are real and same ."<<endl;
       x1 = -b/(2*a);
       cout<< "x1 = x2 =" << x1 << endl;


    }

    else{
         realPart = -b/(2*a);
         imaginaryPart = sqrt(-disciminant)/(2*a);

         cout<<"roots are complex and diiferent."<< endl;
         cout<< "x1 = "<< realPart << "+" << imaginaryPart << "i" << endl;
         cout<< "x2 = "<< realPart << "-" << imaginaryPart << "i" << endl;




    }



    return 0;
}