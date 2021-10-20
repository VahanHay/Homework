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
void foo(int(&arr)[N])
{
    for(int i = 0 ; i < N/2 ; ++i)
    {
        int tmp = arr[i];
        arr[i]= arr[N-1-i] ;
        arr[N-1-i] = tmp;
    }
     for(int i = 0 ; i < N ; ++i)
    {
        
        
        std::cout << arr[i] << " " ; 
    }
    std::cout << std::endl;
    std::cout << 3 * N/2<<std::endl;
}









int main()
{
    const int size = 4;
    int arr[size] = {0} ;
    foo(arr);
    bar(arr);
}