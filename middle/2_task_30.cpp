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


template <int N>
void bar(int(&arr)[N],int(&arr2)[N])
{
    for(int i = 0 ; i < N ; ++i)
    {
        arr2[i]=arr[i] % 10 ;
        std::cout << arr2[i] <<"  " ;
    }
}


















int main()
{
    const int size = 8 ;
    int arr1[size] = {0} ;
    int arr2[size] = {0} ;
    foo(arr1) ;
    bar(arr1,arr2);
}