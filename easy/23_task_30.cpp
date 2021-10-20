#include <iostream>



template <int N>
void foo(int(&arr)[N])
{
    for(int i = 0 ; i < N ; ++i)
    {
        arr[i] = rand() % 25 ;
        arr[N-1] = 5;
        std::cout << arr[i] << " " ; 
    }
    std::cout << std::endl;
}



template <int N>
void bar(int(&arr)[N])
{
  int even_index_count = 0 ;
  int odd_mul = 1 ;
  for(int i = 0 ; i < N ; ++i)
  {
      if( i % 2 == 0)
      {
          even_index_count += arr[i] ;
      }
      else if(arr[i] % 2 == 1)
      {
          odd_mul *= arr[i] ;
      }
  }
  std::cout << "even index count is: " << even_index_count << std::endl ;
  std::cout <<"odd multiply is: " << odd_mul << std::endl ;
}















int main()
{
    const int size = 15 ;
    int arr[size] = {0} ;
    foo(arr) ;
    bar(arr)  ;
}