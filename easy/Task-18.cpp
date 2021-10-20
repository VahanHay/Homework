#include <iostream>
int main()
{
 const int ArrSize=5;
 int numbers[ArrSize]={0};
  std :: cout << "Please Enter " << ArrSize << " Numbers" << std :: endl ;
  for(int i = 0 ; i < ArrSize ; ++i){
      std :: cout << "Now Enter " << i+1 << " Number" << std :: endl ;
      std :: cin >> numbers[i];
      }
    int max = numbers[0] ;
    int min = numbers[0] ;
    int SumMinMax = 0 ;
    
   for(int i = 1 ; i < ArrSize ; ++i ){
       if (max < numbers[i]){
           max = numbers[i];
           }
       if(min > numbers[i]){
             min  = numbers[i];
             }
     }
      SumMinMax = min + max ;
     std :: cout <<"This is count of mininum ,Maximum " <<  SumMinMax << std :: endl ;
   return 0 ;          
  }     
