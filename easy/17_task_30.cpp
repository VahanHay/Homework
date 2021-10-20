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
    int negative = 0 ;
    int zero = 0 ;
    long long mul = 1 ;
    for(int i = 0 ; i < N ; ++i)
    {
        if(arr[i] > 0)
        {
            ++zero ;
        }
        else if(arr[i] % 2 == 0)
        {
            mul*= arr[i] ;
        }
        else if(arr[i] < 0)
        {
            ++negative ;
        }
    }
    std::cout << "zero count is: " << zero  << "  " <<"mul is: " << mul <<"   " <<"negative count is: " << negative <<std::endl;
}




















int main()
{
  const int size = 15 ;
  int arr[size] = {0} ;
  foo(arr) ; 
  bar(arr) ;
}