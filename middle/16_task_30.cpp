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
    int count_elem = 0 ;
    int count = 0 ; 
    int i = 0 ;
    while(arr[i] > 0)
    {
        count_elem += arr[i]  ;
        ++count;
        ++i; 
    }
    std::cout <<"count_elem is: = " << count_elem  << std::endl;
    std::cout <<"count is: = " << count  << std::endl;

}

























int main()
{
    
    const int size = 10;
    int arr[size] = {0} ;
    foo(arr);
    bar(arr);
}