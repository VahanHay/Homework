#include <iostream>



template <int N>
void foo(double(&arr)[N])
{
    for(int i = 0 ; i < N ; ++i)
    {
        arr[i] = rand() % 5 +(-2) ;
        
        std::cout << arr[i] << " " ; 
    }
    std::cout << std::endl;
}


template <int N>
void bar(double(&arr)[N])
{
  long long pos = 1 ;
  int neg = 0 ;
  for(int i = 0 ; i < N ; ++i)
  {
    if(arr[i] > 0)
    {
        pos *= arr[i] ;
    }
    if(arr[i] < 0)
    {
        neg += abs(arr[i]);
    }
  }
   
   if(neg != 0)
   {
       std::cout << pos % neg <<std::endl;
   }
   else 
   {
       std::cout <<"I can not  do divided" <<std::endl;
   }
}














int main()
{
    const int size = 5 ;// xnirum 18 size es 5 em tvel hesht stugelu hamar
    double arr[size] = {0} ;
    foo(arr) ;
    bar(arr) ;

}
