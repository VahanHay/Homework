#include <iostream>



template <size_t N>
void foo(double(&arr)[N])
{
    for(int i = 0 ; i < N ; ++i)
    {
        arr[i] = rand() % 25 + 2 ;
        std::cout << arr[i] << " " ;
    }
    std::cout << std::endl;
}


template <size_t N>
int  max_min_index(double(&arr)[N])
{
    int min_index = 0 ;
    int max_index = 0 ;
    for(int i = 1 ; i < N ; ++i)
    {
        if(arr[max_index] < arr[i])
        {
            max_index = i ;
        }
        if(arr[min_index] > arr[i])
        {
            min_index = i ;
        }
    }
     
    return abs(max_index - min_index) - 1 ;
}


























int main()
{
  const int size = 12 ;
  double arr[12] = {0} ;
  foo(arr) ;
 std::cout << max_min_index(arr) << std::endl  ;

}