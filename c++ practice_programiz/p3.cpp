#include<iostream>
using namespace std;
int main(){
    
    char c;
    bool isLowercaseVowel , isUppercaseVowel;

    cout<< "enter an alphabet:";
    cin>> c;

    isLowercaseVowel = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' );

    isUppercaseVowel = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U' );


if (!isalpha(c))
   
   cout<<"error! non-alphabetic character";

   else if (isLowercaseVowel || isUppercaseVowel)
     cout<< c<< " is a vowel.";
     else
      cout<< c<< " is a consonant.";

    return 0;
}