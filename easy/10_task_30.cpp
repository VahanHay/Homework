#include <iostream>

template <int N >
int foo(int(&arr)[N])
{
    int count_nagative = 0 ;
    int count = 0 ;
    for(int  i = 0 ; i < N ; ++i)
    {
         arr[i] = rand() % 28 +(-9) ;
         if(arr[i] < 0)
         {
            count_nagative -= arr[i] ;
            ++count ;
         }
    }
    return abs(count_nagative / count) ;
}

template <int N >
void boo(int(&arr)[N],int count)
{   int sum = 0 ;
    for(int  i = 0 ; i < N ; ++i)
    {
        if(abs(arr[i]) > count)
        {
            sum += abs(arr[i]) ;
        }
    }
    std::cout << "sum is: " << sum<<std::endl ;
}










int main()
{
    const int size = 17 ;
    int arr[17] = {0} ;
    int  avarage = foo(arr);
    
    std::cout << " avarage " << avarage << std::endl ;
    boo(arr,avarage) ;
    for(int  i = 0 ; i < size ; ++i)
    {
        std::cout <<arr[i] << " " ;
    }
}