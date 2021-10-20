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
void bar(int(&arr)[N],int(&arr2)[N])
{
    int count = 0 ;
     for(int i = 0 ; i < N ; ++i)
     {
        if(arr[i] > 0)
        {
            count += arr[i] ;
        }
     }
     std::cout <<"New array is: " << "  " ;
     for(int i = 0 ; i < N ; ++i)
     {
        arr2[i] = arr[i] - count ;
        std::cout << arr2[i] << " " ;
        
     }
     std::cout << std::endl ;
}









int main()
{
    const int size = 15 ;
    int arr[size] = {0} ;
    int arr2[size] = {0} ;
    foo(arr) ;
    bar(arr,arr2) ;

}