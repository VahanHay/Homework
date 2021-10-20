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





template <size_t N>
void bar(int(&arr)[N])
{
   
    int min_index = 0 ;
    int  max_index = 0 ;
    for(int  k = 1 ; k < N ; ++k)
    {
        if(arr[max_index] < arr[k])
        {
            max_index = k ;
        }
        if(arr[min_index] > arr[k])
        {
            min_index = k ;
        }
    }
    std::cout << "The distense of array is: " <<arr[min_index] <<" to " << arr[max_index] << std::endl ; 
}














int main()
{
    const int size = 12 ;
    int arr[size] = {0} ; 
    foo(arr) ; 
    bar(arr) ; 

}