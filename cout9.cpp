// switch , case, break, default

#include<iostream>
using namespace std;

int main(){
  char c;
  cout<<"Enter a  letter: ";
  cin>>c;
  c = tolower(c);
switch(c){
   case "a":
      cout<< "vowel";
      break;
   case "e":
      cout<< "vowel";
      break;
   case "i":
      cout<< "vowel";
      break;
   case "o":
      cout<< "vowel";
      break;
   case "u":
      cout<< "vowel";
      break;
   default:
     cout<<"consonant";

return 0;
}
