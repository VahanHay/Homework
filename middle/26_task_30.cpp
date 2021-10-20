#include <iostream>




template <int N>
void foo(int(&arr)[N])
{
    for(int i = 0 ; i < N ; ++i)
    {
        arr[i] = rand() % 13  ;
        
        std::cout << arr[i] << " " ; 
    }
    std::cout << std::endl;
}

template <int N>
void bar(int(&arr)[N],int(&arr2)[N])
{
    for(int i = 0 ; i < N ; ++i)
    {
        for(int j = 0 ; j < N ; ++j)
        {
            if(arr2[j]  ==arr[i])
            {
                arr2[j] = 0 ;
            }
        }
    }
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
    const int size = 10 ;
    int arr[size] = {0} ;
    int arr2[size] = {0} ;
    foo(arr);
    foo(arr2);
    bar(arr,arr2);
    qoo(arr2);
}