#include <iostream>
#include <cmath>


template <int N>
void foo(int(&arr)[N])
{
     std::cout<< "Old array is: " ;
    for(int i = 0 ; i < N ; ++i)
    {
        arr[i] = rand() % 6 ;
        
        std::cout << arr[i] << " " ; 
    }
    std::cout << std::endl;

}



template <int N, int T>
void bar(int(&arr)[N],int(&arr2)[T])
{
    int sum = 0 ; 
    std::cout<< "New array is: " ;
    for(int i = 0 ; i < N ;++i)
    {
        
        arr2[i] = arr[i] * arr[i] -2 * arr[i] + 19.3 * cos(arr[i]) ;
        sum += arr2[i] ;
       
    }
       std::cout << std::endl;
    sum /= N ;
    int k = T/2 ;
    for(int i = 0 ; i < N ; ++i)
    {
        
      if(arr2[i] < sum) 
      {
          
          arr2[k] = arr2[i] ;
             
          ++k;
      
      }
      
    }
    for(int i = 0 ; i < N ; ++i)
    {
      if(arr2[i] > sum)
      {
          arr2[k++] = arr2[i] ;
      }
    }
    for(int i = 0 ; i < T ; ++i)
    {
       std::cout << arr2[i] <<"  ";
    }
      std::cout << std::endl;
      std::cout << "min is " << sum <<std::endl ;

}
















int  main()
{
   const int size = 5  ;
   int arr[size] = {0}  ;
   int arr2[size*2] = {0} ;
   foo(arr);
   bar(arr,arr2);
}