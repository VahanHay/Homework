#include <iostream>



template <int N>
void foo(int(&arr)[N])
{
    for(int i = 0 ; i < N ; ++i)
    {
        arr[i] = rand() % 25 +(-9) ;
        arr[N-1] = 5;
        std::cout << arr[i] << " " ; 
    }
    std::cout << std::endl;
}

template <int N>
void bar(int(&arr)[N])
{
    for(int  i = 0 ; i < N/2 ; ++i)
    {
        int tmp = arr[i] ;
        arr[i] = arr[N-1-i] ;
        arr[N-1-i] = tmp ;
    }
     for(int i = 0 ; i < N ; ++i)
    {
        std::cout << arr[i] << " " ; 
    }
    std::cout << std::endl;
}








int main()
{
    const int size = 15 ;
    int arr[size] = {0} ;
    foo(arr) ;
    bar(arr)  ;
}