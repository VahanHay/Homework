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
int bar(int(&arr)[N])
{
    int count = 0 ;
    int i = 0 ;
    while (arr[i] >= 0)
    {
        count += arr[i];
        ++i ;
    }
    if(i <= N)
    {
        return count ;
    }
    else
    {
        std::cout <<"You do not have negative elements " <<std::endl;
        return -1;
    }
   
}


int main()
{
    const int size = 19 ;
    int arr[size] = {0} ;
    foo(arr) ;
   std::cout << bar(arr) << std::endl ;
}