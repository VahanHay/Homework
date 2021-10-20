#include <iostream>


template <size_t N>
void  foo(int(&arr)[N])
{
    for(int i = 0 ; i < N ; ++i)
    {
        arr[i] = rand() % 23 ;
        std::cout << arr[i] << " " ;
    }
    std::cout << std::endl;
}

template <size_t N>
int sort_Insertion(int(&arr)[N])
{
  for(int i = 1 ; i < N ; ++i)
  {
      int j = i - 1 ;
      int key = arr[i] ;
      while(j >= 0 && arr[j] < key)
      {
          arr[j+1] = arr[j] ;
          --j ;
      }
        arr[j+1] = key ;
  }
  return arr[0] + arr[N-1] ;
} 





















int main()
{
    const int size = 12 ;
    int arr[size] = {0} ; 
    foo(arr);
    std::cout << sort_Insertion(arr) << std::endl ;
}