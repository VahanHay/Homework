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
void bar(int(&arr)[N],int(&arr2)[N])
{ 
    int sum = 0 ;
    for(int i = 0 ; i < N ; ++i)
    {
        int k =arr[i];
        while (k)
        {
            sum+= k % 10 ;
            k/=10;
        }
        arr2[i]=sum ;
        sum = 0;
        std::cout<<arr2[i] << "  " ;
    }
    
    
}











int main()
{
    const int size = 9 ;
    int arr[size] = {0} ;
    int arr2[size] ={0} ;
    foo(arr) ;
    bar(arr,arr2);
}