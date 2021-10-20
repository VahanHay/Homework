#include <iostream>




template <int N>
void foo(int(&arr)[N])
{
    for(int i = 0 ; i < N ; ++i)
    {
        arr[i] = rand() % 13 +(-6) ;
        
        std::cout << arr[i] << " " ; 
    }
    std::cout << std::endl;
}

template<int N > 
void bar(int(&arr)[N])
{
    for(int i = 1 ; i < N ; ++i)
    {
        int j = i-1;
        int key = arr[i] ;
        while (j>=0 and arr[j]>key)
        {
            arr[j+1] = arr[j] ;
            --j;
        }
        arr[j+1] = key ;
    }
     
    int i = 0 ;
    while (arr[i]<0)
    {
        ++i;
    }
    int rr = i; 
    int k = (N - i)/2 ;
    for(int t = 0 ; t<=k ;++t,++i)
    {
        int tmp = arr[i];
        arr[i]=arr[N-t-1];
        arr[N-t-1]=tmp;
    }
    
    for(int t = 0 ; t < N ; ++t)
    {
       
        
        std::cout << arr[t] << " " ; 
    }
    std::cout << std::endl;
}

















int main()
{
    const int size = 8 ;
    int arr[size] = {0} ;
    foo(arr);
    bar(arr);
}