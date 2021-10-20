#include <iostream>




template <int N>
void foo(int(&arr)[N])
{
    for(int i = 0 ; i < N ; ++i)
    {
        arr[i] = rand() % 100  ;
        
        std::cout << arr[i] << " " ; 
    }
    std::cout << std::endl;
}


template <int N>
void bar(int(&arr)[N],int(&arr2)[N])
{    int max_arr = 0 ;
     int max_arr2 = 0 ;
    
    for(int i = 1 ; i < N ; ++i)
    {
        if(arr[max_arr] < arr[i])
        {
            max_arr = i ;
        }
    }
     for(int i = 1 ; i < N ; ++i)
    {
        if(arr[max_arr2] < arr[i])
        {
            max_arr2 = i ;
        }
    }
    int tmp = arr[max_arr] ;
     arr[max_arr] = arr2[max_arr2] ;
     arr2[max_arr2] = tmp ;
}

template <int N>
void qoo(int(&arr)[N])
{
    for(int i = 0 ; i < N ; ++i)
    {
       
        
        std::cout << arr[i] << " " ; 
    }
    std::cout << std::endl;
}

int main()
{
    const int size = 3 ;
    int arr[size] = {0} ;
    int arr2[size] = {0} ;
    foo(arr);
    foo(arr2);
    
    bar(arr,arr2);
    qoo(arr);
    qoo(arr2) ;
}