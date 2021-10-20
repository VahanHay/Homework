#include <iostream>



template <int N>
void foo(int(&arr)[N])
{
    for(int i = 0 ; i < N ; ++i)
    {
        arr[i] = rand() % 5 +(-2) ;
        arr[N-1] = 5 ;
        std::cout << arr[i] << " " ; 
    }
    std::cout << std::endl;
}

template <int N>
void bar(int(&arr)[N])
{
    long long positive = 1 ;
    long long negative = 1 ;
    for(int i = 0 ; i < N ; ++i)
    {
        if(arr[i] > 0)
        {
            positive *= arr[i];
        }
        else if(arr[i] < 0) 
        {
           negative *= arr[i];
        }
    }
    std::cout<<"positive is: " <<positive <<  std::endl;
    std::cout<<"negative is: " << negative << std::endl;
    std::cout <<"The answer is: " << positive - abs(negative) << std::endl ;
}






int main()
{
    const int size = 15 ;
    int arr[size] = {0} ;
    foo(arr) ;
    bar(arr) ;

}