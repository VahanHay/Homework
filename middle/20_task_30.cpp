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
void bar(int(&arr)[N])
{
    for(int i = 0 ; i < N-1 ; ++i)
    {
        while(arr[i] > arr[i+1] && i< N-1)
        {
            std::cout << i << " ";
            ++i;
        }
        std::cout << std::endl;
    }
}












int main()
{
    
    const int size = 10;
    int arr[size] = {0} ;
    foo(arr);
    bar(arr);
}