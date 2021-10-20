#include <iostream>

template <size_t N>
void swap_min_max(int(&arr)[N])
{
  int min_index = 0 ;
  int max_index = 0 ;
  for(int  i = 0 ; i < N ; ++i)
  {
      arr[i]= rand() % 25 ;
      std::cout << arr[i] <<"  " ;
  }
  for(int  i = 0 ; i < N ; ++i)
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
  std::cout << std::endl ;
  std::cout << "value of max_index is " << arr[max_index] << std::endl;
  std::cout << "value of min_index is " << arr[min_index] << std::endl;
  int tmp= arr[max_index] ; 
  arr[max_index] = arr[min_index];
  arr[min_index] = tmp ;
  for(int  i = 0 ; i < N ; ++i)
  {
      
      std::cout << arr[i] <<"  " ;
  }
}











int main()
{
    const int size = 9 ;
    int arr[size]  = {0} ;
    swap_min_max(arr) ;
}