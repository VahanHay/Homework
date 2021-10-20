#include <iostream>




template <int N>
void foo(int(&arr)[N])
{
    for(int i = 0 ; i < N ; ++i)
    {
        arr[i] = rand() % 13+11 ;
        
        std::cout << arr[i] << " " ; 
    }
    std::cout << std::endl;
}


template <int N>
void bar(int(&arrx)[N],int(&arry)[N])
{
    for(int i = 0 ; i < N ; ++i)
    {
      int p= arrx[i] ;
      int k = 0 ;
      k = -1 *((p%10) - (p/10) % 10) ;
      arry[i] = k ;
      std::cout << arry[i] << "  " ;
    }
    std::cout << std::endl;
}
















int main()
{
    const int size = 10 ;
    int x[10] = {0} ;
    int y[10] = {0} ;
    foo(x);
    bar(x,y) ;
    
}