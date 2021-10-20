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
    int count = 0;
    for(int i = 0 ; i < N ; ++i)
    {
        if(arr[i] < 0 and arr[i] % 2 == 0)
        {
            count = count + arr[i] ;
        }
    }
    for(int i = 0 ; i < N ; ++i)
    {
        if(arr[i] % 3 == 0)
        {
          arr[i]=count ;
        }
        std::cout << arr[i] <<"  " ;
    }
}







int main()
{
    const int size = 4;
    int arr[size] = {0} ;
    foo(arr);
    bar(arr);
}