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
    int two_index = 0 ;
    int three_index = 0 ; 
    for(int i = 0 ; i < N ; ++i)
    {
        if(i % 2 == 0)
        {
            two_index+=arr[i] ;
        }
        if(i % 3 == 0)
        {
            three_index += arr[i] ;
        }
    }
    std::cout << "two_index  is: =" << two_index  << std::endl ;
    std::cout << "three_index is: =" << three_index << std::endl ;
    std::cout << "two_index - three_index is: =" << two_index - three_index << std::endl ;
}














int main()
{
   const int size = 16 ; 
   int arr[size] =  {0} ;
     foo(arr) ;
     bar(arr) ;
}