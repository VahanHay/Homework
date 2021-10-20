#include <iostream>



template <int N>
void foo(int(&arr)[N])
{
    for(int i = 0 ; i < N ; ++i)
    {
        arr[i] = rand() % 25 +(-9) ;
        arr[N-1] = 5 ;
        std::cout << arr[i] << " " ; 
    }
    std::cout << std::endl;
}

template <int N>
void bar(int(&arr)[N])
{
    int max = arr[0] ; 
    for(int i = 1 ; i < N ; ++i)
    {
        if(max < arr[i])
        {
            max = arr[i] ;
        }
    }
    for(int i = 0 ; i < N ; ++i)
    {
        if(arr[i]  % 2 == 0)
        {
             arr[i] = max ;
        }
        std::cout << arr[i] << "  " ;
     
    }
       std::cout << std::endl;
}





int main()
{
    const int size = 19 ;
    int arr[size] = {0} ;
    foo(arr) ;
    bar(arr) ;

}