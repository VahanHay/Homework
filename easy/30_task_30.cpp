#include <iostream>



template <int N>
void foo(int(&arr)[N])
{
    for(int i = 0 ; i < N ; ++i)
    {
        arr[i] = rand() % 11 +(-2) ;
        
        std::cout << arr[i] << " " ; 
    }
    std::cout << std::endl;
}

template <int N>
void bar(int(&arr)[N])
{
    int min_index = 0 ;
    for(int  i = 1 ; i < N ; ++i)
    {
        if(arr[min_index] > arr[i])
        {
           min_index = i ;
        }
    }
    std::cout << arr[min_index] + min_index << std::endl ;
}
















int main()
{
    const int size = 12 ;
    int arr[size] = {0} ;
    foo(arr) ;
    bar(arr) ;

}