#include <iostream>




template <int N>
void foo(int(&arr)[N])
{
    for(int i = 0 ; i < N ; ++i)
    {
        arr[i] = rand() % 15 +(-9) ;
        
        std::cout << arr[i] << " " ; 
    }
    std::cout << std::endl;
}


template <int N>
void bar(int(&arr)[N],int(&arr2)[N])
{    int k = 0 ;
     
    for(int i = 0 ; i < N ; ++i)
    {
        if(arr[i] < 1)
        {
            arr2[k++] = arr[i] ;
        }
    }
     for(int i = 0 ; i < N ; ++i)
     {
         if(arr[i] > 0)
         {
             arr2[k++] = arr[i] ;
         }
     }
      for(int i = 0 ; i < N ; ++i)
    {
        std::cout << arr2[i] << "  " ;
    }

}




















int main()
{
    
    const int size = 10;
    int arr[size] = {0} ;
    int arr2[size] = {0} ;
    foo(arr);
    bar(arr,arr2);
}