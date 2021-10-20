//Swap the maximum and first elements
#include <iostream>

template<size_t N>
void swap_maximum_whit_first(int(&arr)[N])
{
    int index = 0 ;
     std::cout << " After swap " ;
     std::cout<<std::endl;
    for(int  i = 0 ; i < N ; ++i)
    {
        arr[i] = rand() % 10 ;
       
        std::cout << arr[i] <<"  ";
    }

    for(int i = 1 ; i < N ; ++i)
    {
        if(arr[index] < arr[i])
        {
           
            index = i ;
        }
    }
    int tmp = arr[0] ;
    arr[0] = arr[index] ;
    arr[index] = tmp ;
      std::cout<<std::endl;
     std::cout << " Before swap " ;
    for(int  i = 0 ; i < N ; ++i)
    {
       
        std::cout << arr[i] <<"  ";
    }
}








int main()
{
    const int size = 10 ;
    int arr[size] = {0} ;
    swap_maximum_whit_first(arr);
}