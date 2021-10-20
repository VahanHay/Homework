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
    int sum = 0 ;
    int div = 0 ;
    int min_index = 0 ;
    int  max_index = 0 ;
    for(int  k = 1 ; k < N ; ++k)
    {
        if(arr[max_index] < arr[k])
        {
            max_index = k ;
        }
        if(arr[min_index] > arr[k])
        {
            min_index = k ;
        }
    }
    std::cout <<"Sum of min and max is: " << arr[min_index] + arr[max_index] << std::endl;
    std::cout <<" Difference of min and max is: " << arr[min_index] - arr[max_index] << std::endl;
}


























int main()
{
    const int size = 15 ;
    int arr[size] = {0} ;
    foo(arr) ;
    bar(arr) ;
}