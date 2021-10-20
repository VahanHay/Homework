#include <iostream>
int main()
{
 const int ArrSize = 3  ; 
  int count = 0 ;
 int matric[ArrSize][ArrSize]={0};
  for(int i = 0; i < ArrSize ; ++i){
       std :: cout << " Please Enter " << i+1 << " line Numbers" << std :: endl;
       for(int j = 0 ; j < ArrSize ; ++j){
            std :: cin >> matric[i][j];
       }  
   } 
        for(int i = 0 ; i < ArrSize ; ++i){
            count= count + matric[i][i] + matric[i][ArrSize-1-i];
            }
       
        
          std :: cout << count << std :: endl ;    
        
return 0;
}











