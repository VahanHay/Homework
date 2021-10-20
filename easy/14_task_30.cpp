#include <iostream>

template <size_t N>
void foo(int(&arr)[N])
{
    for(int i = 0 ; i < N ; ++i)
    {
        arr[i] = rand() % 25 + 2 ;
        std::cout << arr[i] << " " ;
    }
    std::cout << std::endl;
}

template <size_t N>
void bar(int(&arr)[N])
{
    int odd_count = 0 ;
    for(int i = 0 ; i < N ; ++i)
    {
       if(arr[i] % 2 == 1)
       {
           odd_count += arr[i] ;
       }
    }
    for(int i = 0 ; i < N ; ++i)
    {
        if(arr[i] % 3 == 0)
        {
            arr[i] = odd_count ;
        }
    }
}


template <size_t N>
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
    const int size = 17 ;
    int arr[size] = {0} ;
    foo(arr) ;
    bar(arr) ;
    qoo(arr) ;
}

