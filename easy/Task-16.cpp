#include <iostream>
const   int Arrsize=5;
int main()
{
    int index=0;
    int max=0;
int numbers[Arrsize]={0};
    std::cout << "Please Enter 5 numbers"<< std :: endl;
   for(int i = 0 ; i < Arrsize ; ++i){
       std :: cout << "Please Enter "<< i+1<<" Number"<< std :: endl;
       std::cin>> numbers[i];
      };
    
    max=numbers[0];
    for(int i= 1 ; i< Arrsize; ++i){
        if(max<numbers[i])
        {
            max=numbers[i];
            index=i;
        }
    }
    
    std :: cout << index <<" "<< max << std :: endl;
 return 0;
}
