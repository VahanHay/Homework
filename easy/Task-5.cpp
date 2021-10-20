#include <iostream>
int main()
{ 
  double a=0.0;
  double b=0.0;
  std::cout<<"Please Enter Your First Number"<<std::endl;
  std::cin>>a;
  std::cout<<"Please Enter Your Second Number"<<std::endl;
  std::cin>>b;
  char ch = 0 ;
  std::cout<<"Please Enter + or - or * or /"<<std::endl;
  std :: cin >> ch ;
  int i = ch ;
  if (i==43 || i==42 || i==45 || i==47){
  if (i==43){
     std::cout<<a+b<<std::endl;
     }
  else if (i==42){
       std::cout<<a*b<<std::endl;
       }
  else if (i==45){
       std::cout<<a-b<<std::endl;
       }
  else if (i==47){
       std::cout<<a/b<<std::endl;
       }
    }
    else {
    std::cout<<" Sorry but You Don't write + or - or * or /"<<std::endl;
       }
return 0;
}
