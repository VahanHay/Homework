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
    int zero  = -1 ;
    int negative = -1 ;
    for(int i = 0 ; i < N ; ++i)
    {
        if(arr[i]== 0)
        {
            zero = i;
            break;
        }
    }
    for(int i = 0 ; i < N ; ++i)
    {
        if(arr[i] < 0)
        {
            negative = i;
            break;
        }
    }
    if(negative != -1 && zero != -1)
    {
        if(negative > zero)
        {   
     
            for(int i = zero ; i < negative; ++i)
            {
                count += arr[i] ;
              std::cout << arr[i] <<"  " ;
            }
        }
        else
        {
            for(int i = negative ; i < zero; ++i)
            {
                count += arr[i] ;
              std::cout << arr[i] <<"  " ;
            }
        }
    }
    else
    {
         std::cout << "Program can not work for this array" << std::endl;
    }
    std::cout << "Count is: "<<count << std::endl;
}      



























int main()
{
    
    const int size = 10;
    int arr[size] = {0} ;
    foo(arr);
    bar(arr);
}