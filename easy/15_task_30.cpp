#include <iostream>

template <size_t N>
void foo(int(&arr)[N])
{
    for(int i = 0 ; i < N ; ++i)
    {
        arr[i] = rand() % 25 + 2 ;
        std::cout << arr[i] << " " ;
    }
    std::cout << std::endl;
}


template <size_t N>
int sort_Insertion(int(&arr)[N])
{
  for(int i = 1 ; i < N/2 ; ++i)
  {
      int j = i - 1 ;
      int key = arr[i] ;
      while(j >= 0 && arr[j] > key)
      {
          arr[j+1] = arr[j] ;
          --j ;
      }
        arr[j+1] = key ;
  }
  
} 


template <size_t N>
void sort_Insertion2(int(&arr)[N])
{
  for(int i = N/2 ; i < N ; ++i)
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
  
} 

template <size_t N>
void qoo(int(&arr)[N])
{
    for(int i = 0 ; i < N ; ++i)
    {
       
        std::cout << arr[i] << " " ;
    }
    std::cout << std::endl;
}


int main()
{
    const int  size  = 14 ;
    int arr[size] = {0} ;
    foo(arr) ;
    sort_Insertion2(arr) ;
    sort_Insertion(arr) ;
    qoo(arr) ;
}