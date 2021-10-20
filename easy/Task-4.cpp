#include <iostream>
int main ()
{
std :: cout << "Please Enter Your Number" << std :: endl ;
int  myNumber= 0;
int  count   = 1;
std :: cin  >> myNumber ;
std :: cout << "Thih Is Resalt " << std :: endl;
while (myNumber){
       int k =myNumber % 10 ;
       myNumber=myNumber / 10 ;
       count= count * k ;
}
  std :: cout << count << std :: endl;
 return 0;
}
