#include <iostream>
#include <cmath>


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

template <int N>
void bar(int(&arr)[N] ,int(&arr2)[N])
{
    for(int i = 0 ; i < N ; ++i)
    {
        arr2[i] =cos(arr[i] * arr[i]) + 2.97 * log10(2) * log10(2) * i * i;
        std::cout <<arr2[i]  << " " ; 
    }
     std::cout << std::endl;
}

template <int N,int T>
void qoo(int(&arr1)[N],int(&arr2)[N],int(&arr5)[T])
{
    for(int i = 0 ; i < N ; ++i)
    {
        arr5[i]=arr1[i] ;
        
    }
    for(int i = 0 ; i < N ; ++i)
    {
        arr5[i+N] = arr2[i];
    }
}

template <int T>
void chlp(int(&arr5)[T])
{
    for(int i = 1 ; i < T ; ++i)
    {
        int j = i-1;
        int key = arr5[i] ;
        while (j>=0 and arr5[j] < key)
        {
            arr5[j+1]=arr5[j];
            --j;
        }
        arr5[j+1] = key ;
    }
    for(int i = 0 ; i < T ; ++i)
    {
         std::cout <<arr5[i]  << " " ; 
    }
}





























int main()
{
   const int size = 2 ; 
   int arr[size] =  {0} ;
   int arr2[size] = {0} ;
   int arr5[size*2] = {0} ;
     foo(arr) ;
     bar(arr,arr2) ;
     qoo(arr,arr2,arr5);
     qoo(arr , arr2 , arr5) ;
     chlp(arr5) ;
}