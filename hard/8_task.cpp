#include <iostream>

template <int N>
void foo(int(&arr)[N][N])
{
    for(int i = 0; i < N; ++i)
    {
        for(int j = 0; j < N; ++j)
        {
            arr[i][j]=rand() % 10 ;
            std::cout <<  arr[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

template <int N>
void bar(int(&arr)[N][N])
{
    int count = 0;
    int count2 = 0;
    for(int i=0, j =0 ; j < N ; ++j)
    {
        count += arr[i][j] ;
    }

     for(int i = 1; i < N; ++i)
    {
        for(int j = 0; j < N; ++j)
        {
            count2 += arr[i][j];
        }
        if(count > count2)
        {
            count = count2;
        }
    }

    for(int i = 0; i < N; ++i)
    {
        for(int j = 0; j < N; ++j)
        {
            arr[i][j] *= count ;
            std::cout <<  arr[i][j] << " ";
        }
        std::cout << std::endl;
    }
    std::cout << "count  is: " << count << std::endl;
}


int main()
{
    int arr[3][3];
    foo(arr);
    bar(arr);
}