#include <iostream>
#include <ctime>


template <size_t N>
void foo(float(&arr)[N])
{
    for(int i = 0 ; i < N ; ++i)
    {
        arr[i] = rand() % 90 + 0.5 ;
    }
}

template <size_t N>
void boo(float(&arr)[N])
{
    float  first = arr[0] ;
    int countMoreThenFirst = 0 ;
    for(int i = 1 ; i < N ; ++i)
    {
        std::cout << arr[i] << "  " ; 
        if(first < arr[i])
        {
            ++countMoreThenFirst ; 
        }
    }
    std::cout << std::endl ; 
    std::cout <<"The Count of elements that biger then first are: " << countMoreThenFirst << std::endl ; 
}


















int main()
{
    srand((int)time(0));
    float arr[15] = {0} ;
    foo(arr) ;
    boo(arr) ;
}