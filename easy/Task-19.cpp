#include <iostream>
 int main()
{
  const int ArrSize = 6 ; 
  int numbers[ArrSize] = {0} ;
  std :: cout << "Please Enter " << ArrSize <<" Numbers" << std :: endl ;
  for (int i = 0 ; i < ArrSize ; ++i ){
       std :: cout << " Please Enter " << i+1 << " Number" << std :: endl ;
       std :: cin  >> numbers[i];
       }
      std :: cout << "This Is Revers Of Your Numbers" << std :: endl ;
   for(int i = ArrSize -1 ; i >= 0 ; --i){
       std :: cout << numbers[i] << std :: endl ;
      }
   return 0 ;
}
  
