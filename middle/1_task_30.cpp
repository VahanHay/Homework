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
void bar(int(&mixArr)[N],int(&arr1)[N],int(&arr2)[N])
{
    for(int i = 0 ; i < N ; ++i)
    {
        if(i % 2 == 0)
        {
            mixArr[i] = arr1[i+1] ;
        }
        else
        {
            mixArr[i] = arr2[i-1] ;
        }
        std::cout << mixArr[i] <<"  " ;
    }
     std::cout << std::endl;
}







int main()
{
    const int size = 4 ;
    int arr1[size] = {0} ;
    int arr2[size] = {0} ;
    int mixArr[size] = {0} ;
    foo(arr1) ;
    foo(arr2) ;
    bar(mixArr,arr1,arr2);
}