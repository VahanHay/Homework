#include <iostream>



template <int N>
void foo(int(&arr)[N])
{
    for(int i = 0 ; i < N ; ++i)
    {
        arr[i] = rand() % 11 +(-2) ;
        
        std::cout << arr[i] << " " ; 
    }
    std::cout << std::endl;
}

template <int N>
void bar(int(&arr)[N])
{
    int size_of_elem = 0 ;
    int count = 0 ;
    int midel_pos = 0;
     for(int i = 0 ; i < N ; ++i)
    {
      if(arr[i] > 0)
      {
          midel_pos += arr[i] ;
          ++count;
      }
    }
    midel_pos /= count ;
    count = 0 ;
    for(int i = 0 ; i < N ; ++i)
    {
      if(abs(arr[i]) > midel_pos)
      {
          ++size_of_elem;
          count += arr[i] ;

      }
    }
     std::cout <<"midel_pos is : " <<midel_pos << std::endl;
     std::cout <<"size_of_elem is : " <<size_of_elem << std::endl;
     std::cout <<"count is:" << count << std::endl;
}














int main()
{
    const int size = 17 ;
    int arr[size] = {0} ;
    foo(arr) ;
    bar(arr) ;

}