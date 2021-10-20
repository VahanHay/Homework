#include <iostream>

template <size_t N>
void foo(double(&arr)[N])
{
    for(int i = 0 ; i < N ; ++i)
    {
        arr[i] = rand() % 90 - 1.5f ;
    }
}

template <size_t N>
void max_min_index(double(&arr)[N])
{
    int min_index = 0 ;
    int max_index = 0 ;
    for(int i = 1 ; i < N ; ++i)
    {
        if(arr[max_index] < arr[i])
        {
            max_index = i ;
        }
        if(arr[min_index] > arr[i])
        {
            min_index = i ;
        }
    }
     for(int i = 1 ; i < N ; ++i)
    {
        std::cout << arr[i] <<"  ";
    }
    std::cout << std::endl;
    std::cout << "min_index is: " << min_index <<std::endl;
    std::cout << "max_index is: " << max_index <<std::endl;
}













int main()
{
    const int size = 16 ;
    double arr[size] = {0} ;
    foo(arr);
    max_min_index(arr) ;
}