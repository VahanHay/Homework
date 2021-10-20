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
    int sum = 0;
    for(int i = 0 ; i < N ; ++i)
    {
        sum += arr[i];
    }
    sum/=N;
    int count = 0;
    for(int i = 0 ; i < N ; ++i)
    {
        if(arr[i] > sum)
        {
            ++count;
        }
    }
    double t = 0.0 ;
    t = count * 100.0;
    t/=N;
     std::cout <<"mid is "  <<sum <<std::endl;
    std::cout <<"count in % is " << t<<std::endl;
}



int main()
{
    const int size = 9 ;
    int arr[size] = {0} ;
 
    foo(arr);
    bar(arr);
    
}