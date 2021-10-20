#include <iostream>

template <int N >
void foo(int(&arr)[N])
{
  int count = 0 ; 
  int sum   = 0 ; 

  for(int  i = 0 ; i < N ; ++i)
  {
      arr[i] = rand() % 28 +(-8) ;
      std::cout << arr[i] << "  " ; 
  }
      std::cout << std::endl;
  for(int  i = 0 ; i < N ; ++i)
  {
      if(arr[i] > 0 && arr[i] % 2 == 0)
      {
          ++count ;
          sum += arr[i] ; 
      }
  }
   std::cout <<"sum is: " <<sum  << std::endl;
    std::cout << "count is: " << count << std::endl;
}

























int main()
{
    const int size = 14 ;
    int arr[size] = {0} ;
    foo(arr);
}
