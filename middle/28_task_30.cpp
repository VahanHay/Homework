#include <iostream>




template <int N>
void foo(int(&arr)[N])
{
    for(int i = 0 ; i < N ; ++i)
    {
        arr[i] = rand() % 13  ;
        
        std::cout << arr[i] << " " ; 
    }
    std::cout << std::endl;
}


template <int N>
void bar(int(&arr)[N])
{
    int even = 0 ;
    int odd = 0 ;
    for(int i = 0 ; i < N ; ++i)
    {
        if(i % 2==1)
        {
            odd += arr[i] ;
        }   
        else
        {
            even += arr[i] ;
        } 
    }
    std::cout<<"even" << even << std::endl;
    std::cout<<"odd" <<odd << std::endl;
    int k =  even % odd ;
    std::cout << k << std::endl;
}


int main()
{
    const int size = 5 ;
    int arr[size] = {0} ;
 
    foo(arr);
    bar(arr);
    
}