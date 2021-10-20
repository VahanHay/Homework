#include <iostream>



template <int N>
void foo(int(&arr)[N])
{
    for(int i = 0 ; i < N ; ++i)
    {
        arr[i] = rand() % 15 ;
        
        std::cout << arr[i] << " " ; 
    }
    std::cout << std::endl;
}


template <int N>
void bar(int(&arr)[N])
{
    int sum = 0 ;
    for(int i = 0 ; i < N ; ++i)
    {
        int tmp = arr[i] ;
        while (tmp)
        {
            sum += tmp % 10 ;
            tmp /= 10 ;
        }
        
    }
    std::cout << "Sum is: " << sum <<std::endl ;
    
}






int main()
{
    
    const int size = 17 ;
    int arr1[size] = {0} ;
    foo(arr1)  ;
    bar(arr1) ;
}