#include <iostream>




template <int N>
void foo(int(&arr)[N])
{
    for(int i = 0 ; i < N ; ++i)
    {
        arr[i] = rand() % 15 +(-9) ;
        
        std::cout << arr[i] << " " ; 
    }
    std::cout << std::endl;
}

template <int N>
void bar(int(&arr)[N],int s)
{
    int index = 0;
    int k = abs(arr[0] -s);
    for(int i = 1 ; i < N ; ++i)
    {
        if(k<abs(arr[i] -s))
        {
            k= abs(arr[i] -s) ;
            index = i ;
        }
    }
    std::cout << "index is " << index <<std::endl;
    std::cout << "Differens is " << k  <<std::endl;
}
















int main()
{
    int num;
    std::cout <<"please enter number" <<std::endl;
    std::cin>>num;
    const int size = 4;
    int arr[size] = {0} ;
    foo(arr);
    bar(arr,num);
}