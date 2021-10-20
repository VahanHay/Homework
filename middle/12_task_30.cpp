#include <iostream>




template <int N>
void foo(double(&arr)[N])
{
    for(int i = 0 ; i < N ; ++i)
    {
        arr[i] = rand() % 15 ;
        
        std::cout << arr[i] << " " ; 
    }
    std::cout << std::endl;
}





template <int T>
void chlp(double(&arr5)[T])
{    int count = 0 ;
    for(int i = 1 ; i < T ; ++i)
    {
        int j = i-1;
        int key = arr5[i] ;
        while (j>=0 and arr5[j] < key)
        {
            arr5[j+1]=arr5[j];
            --j;
            ++count ;
        }
        arr5[j+1] = key ;

    }
    std::cout<< count <<"is count " <<std::endl;
}




















int main()
{
    const int size = 3 ;
    double arr[size] = {0};
    foo(arr);
    chlp(arr);
}