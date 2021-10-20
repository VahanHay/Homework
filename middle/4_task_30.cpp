#include <iostream>



template <int N>
void foo(int(&arr)[N])
{
    for(int i = 0 ; i < N ; ++i)
    {
        arr[i] = rand() % 15 ;
        
        std::cout << arr[i] << " " ; 
    }
    std::cout << std::endl;
}

template <int N ,int T , int K>

void bar(int(&arr1)[N],int(&arr2)[T],int(&sortArr)[K])
{
    int i = 0 ;
    for(; i < N ; ++i)
    {
        sortArr[i] = arr1[i] ;
         std::cout << sortArr[i] << "  " ;
    }
    int tmp = i + T;
    for(; i < tmp ; ++i)
    {
        sortArr[i] = arr2[i-N] ;
        std::cout << sortArr[i] << "  " ;
    }
      std::cout << std::endl ;


    for(int  i = 0 ; i < K ; ++i)
    {
        int  j = i-1 ;
        int key = sortArr[i] ;
        while (j>=0 && sortArr[j] > key)
        {
            sortArr[j+1]=sortArr[j] ;
            --j ;
        }
        sortArr[j+1] = key ;
    } 

    for(int  i = 0 ; i < K ; ++i)
    {
        std::cout << sortArr[i] << " ";
    }
       std::cout << std::endl ;
}










int main()
{
    
    const int size  =  9 ;
    const int size2 =  7 ;
    int arr1[size] =  {0} ;
    int arr2[size2] = {0} ;
    int sortArr[size + size2] = {0};
    foo(arr1) ;
    foo(arr2) ;
    bar(arr1,arr2,sortArr) ;
}