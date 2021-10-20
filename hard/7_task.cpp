#include <iostream>

template <int N>
void foo(int(&arr)[N][N])
{
    for(int i = 0; i < N; ++i)
    {
        for(int j = 0; j < N; ++j)
        {
            arr[i][j]=rand() % 25 ;
            std::cout <<  arr[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

template <int N>
int bar(int(&arr)[N][N],int key)
{
    int count_of_lines = 0 ;
     for(int i = 0; i < N; ++i)
    {
        for(int j = 0; j < N; ++j)
        {
           if(arr[i][j] == key)
           {
               ++count_of_lines;
               break;
           }
         
        }
        
    }
    return count_of_lines;
}









int main()
{
    const int size = 5;
    //const int size2 = 6;
    int arr[size][size];
    int key = 0 ;
    std::cout << " Please enter number that you whant to serch " << std::endl;
    std::cin >> key ;
    foo(arr) ;
    std::cout << bar(arr,key) << std::endl;
}