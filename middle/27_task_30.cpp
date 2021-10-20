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
    int count = 0;
    for(int i = 0 ; i < N-1 ; ++i)
    {
        if(arr[i] < arr[i+1])
        {
            ++count;
            while(i < N-1 && arr[i] < arr[i+1])
            {
                ++i;
            }
        }
    }
    
    std::cout << "count is: =" << count << std::endl;
}







int main()
{
    const int size = 10 ;
    int arr[size] = {0} ;
 
    foo(arr);
    bar(arr);
    
}