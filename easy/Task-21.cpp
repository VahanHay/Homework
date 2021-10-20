#include <iostream>
int main()
{
 const int ArrSize = 3 ;
 int number1[ArrSize] = {0} ;
 int number2[ArrSize] = {0} ;
 int count[ArrSize]   = {0} ;
 std :: cout << "Please Enter " << ArrSize <<" Numbers" << std :: endl ;
 for(int i = 0 ; i < ArrSize ; ++i){
     std :: cout << " Plesae Enter 1 type " << i+1 << " Number" << std :: endl ;
     std :: cin  >> number1[i];
     std :: cout << " Plesae Enter 2 type " <<i+1  << " Number" << std :: endl ;
     std :: cin  >> number2[i];
     }
  for(int i = 0 ; i < ArrSize ; ++i){
      count[i] = number1[i] + number2[i];
      std ::cout << count[i] << std :: endl ;
    } 
   return 0 ;
}


