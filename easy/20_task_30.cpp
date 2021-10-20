#include <iostream>



template <int N>
void foo(int(&arr)[N])
{
    for(int i = 0 ; i < N ; ++i)
    {
        arr[i] = rand() % 25 +(-9) ;
        std::cout << arr[i] << " " ;
        
    }
    std::cout << std::endl;
}


template <int N>
void bar(int(&arr)[N])
{
    int count = 0 ;
    for(int i = 0 ; i < N ; ++i)
    {
        if(abs(arr[i]) % 3 == 0)
        {
            arr[i] = 0 ; 
            ++count ;
        }
       
    }
     std::cout << count<<" " ;
    
}















int main()
{
    const int size = 16 ;
    int arr[size] = {0} ;
    foo(arr) ;
    bar(arr)  ;
}