#include <iostream>

template <int N>
void foo(int(&arr)[N][N])
{
    for(int i = 0; i < N; ++i)
    {
        for(int j = 0; j < N; ++j)
        {
            arr[i][j]=rand() % 25 +1;
            std::cout <<  arr[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

template <int N>
void bar(int(&arr)[N][N])
{
    for(int i = 0; i < N - 1 ; ++i)
    {
        for(int j = 0 ; j < N-1-i ; ++j)
        {
            std::swap(arr[i][j],arr[N-i-1][N-1-j]);
             
        }
    }
}

template <int N>
void test(int(&arr)[N][N])
{
    for(int i = 0; i < N; ++i)
    {
        for(int j = 0; j < N; ++j)
        {
           // arr[i][j]=rand() % 15 +1;
            std::cout <<  arr[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

int main()
{
    const int size = 4 ;
    int arr[size][size];
    foo(arr);
    bar(arr);
    std::cout << std::endl;
    test(arr);
}