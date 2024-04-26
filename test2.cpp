#include<iostream>
class Pattern{
public:
   int n;
   void print(){
      std::cout<<"Enter a number:";
      std::cin >>n;
   }
   
   void res(){    
      for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            std::cout<<"*";
        }
        std::cout<<std::endl;
    }
}
};

int main() {
    Pattern ob;
    ob.print();
    ob.res();
  return 0;  
}
