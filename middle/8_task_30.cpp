#include <iostream>



template <int N>
void foo(int(&arr)[N])
{
    for(int i = 0 ; i < N ; ++i)
    {
        arr[i] = rand() % 15 ;
        
        std::cout << arr[i] << " " ; 
    }
    std::cout << std::endl;
}


template <int N>
void bar(int(&arr)[N])
{
    int k = 0;
    int index_of_bigger_odd_elem = 0 ;
    for(int i = 0 ; i < N ; ++i)
    {
        if(arr[i] % 2 == 1 and arr[i] > 0 && k < arr[i])
        {
            k = arr[i] ;
            index_of_bigger_odd_elem = i ;
        }
    }
    std::cout << "index_of_bigger_odd_elem is: =" << index_of_bigger_odd_elem <<std::endl;
    if(k==0)
    {
        std::cout<<"There is not odd elements " <<std::endl;
    }
} 



















int main()
{
   const int size = 16 ; 
   int arr[size] =  {0} ;
     foo(arr) ;
     bar(arr) ;
}