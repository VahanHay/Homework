#include <iostream>

template <size_t N>
void foo (int(&arr)[N])
{
    for(int i = 0 ; i < N ; ++i)
    {
        arr[i] = rand() % 90 ; 
    }
}

template <size_t N>
void boo(int(&arr)[N])
{
    int evenCount = 0 ;
    int oddCount  = 0 ;
    for(int i = 0 ; i < N ; ++i)
    {
        if(arr[i] % 2 == 0)
        {
            ++evenCount ;
        }
        else
        {
            ++oddCount ;
        }
    }
    if(oddCount > evenCount)
    {
        std::cout << "Odd Numbers is more and count is: "  << oddCount << std::endl ;
        for(int i = 0 ; i < N ; ++i)
        {
            if(arr[i] % 2 == 1)
            {
                std::cout << arr[i] << "  " ;
            }
        }
    }
    else
    {
        std::cout << "Even Numbers is more and count is: "  << evenCount << std::endl ;
        for(int i = 0 ; i < N ; ++i)
        {
            if(arr[i] % 2 == 0)
            {
                std::cout << arr[i] << "  " ;
            }
        }
    }
}
   











int main()
{
    
    const int size = 20 ;
    int arr[size] = {0} ;
    foo(arr);
    boo(arr);
}