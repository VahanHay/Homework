#include <iostream>
int main()
{
 const int ArrSize = 3  ; 
 int matric[ArrSize][ArrSize]={0};
  for(int i = 0; i < ArrSize ; ++i){
       std :: cout << " Please Enter " << i+1 << " line Numbers" << std :: endl;
       for(int j = 0 ; j < ArrSize ; ++j){
            std :: cin >> matric[i][j];
       }
         
   } 
    for(int i = 0 , j =(ArrSize-1); i < ArrSize ; ++i, --j ){
         
             std :: cout << matric[i][j] << std :: endl ;
              
        }
return 0;
}
