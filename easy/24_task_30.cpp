#include <iostream>



template <int N>
void foo(int(&arr)[N])
{
    for(int i = 0 ; i < N ; ++i)
    {
        arr[i] = rand() % 9  ;
        arr[N-1] = 5;
        std::cout << arr[i] << " " ; 
    }
    std::cout << std::endl;
}

template <int N>
void bar(int(&arr)[N])
{
    int sum = 0 ;
    int count = 0 ;
    for(int i = 0 ; i < N-1 ; ++i)
    {
        if(arr[i] < arr[N-1])
        {
            count += arr[i] ;
            ++sum ;
        }
    }
    std::cout << "The count of element that is less then last element is: " << count << std::endl;
    std::cout <<"sum is: " <<sum <<std::endl;
}










int main()
{
    const int size = 15 ;
    int arr[size] = {0} ;
    foo(arr) ;
    bar(arr)  ;
}