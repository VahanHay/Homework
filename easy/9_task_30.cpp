#include <iostream>

template <size_t N>
int foo(int(&arr)[N])
{
    int count = 0 ;
    for(int i = 0 ; i < N ; ++i)
    {
        arr[i] =rand() % 90 + 1 ;
        count +=arr[i] ;
    }
    std::cout <<"Old array is : " ;
    for(int i = 0 ; i < N ; ++i)
    {
       std::cout << arr[i] << " " ;
       
    }
    std::cout << std::endl ;
    return count / N ;
}

template <size_t N>
void boo(int(&arr)[N], int(&arr2)[N] ,int average)
{
     std::cout <<"New array is : " ;
    for(int i = 0 ; i < N ; ++i)
    {
        arr2[i]=arr[i] - average ;
        std::cout << arr2[i] << " "; 
    }
    std::cout << std::endl ;
}























int main()
{
    const int  size = 16 ;
    int arr[size] = {0} ;
    int arr2[size] = {0} ;
    int avarage = foo(arr) ;
    boo(arr,arr2, avarage);
    std::cout << "avarage is: " << avarage << std::endl;

}