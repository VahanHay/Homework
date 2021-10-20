#include <iostream>

template <int N,int T>
void foo(int(&arr)[N][T])
{
    for(int i = 0; i < N; ++i)
    {
        for(int j = 0; j < T; ++j)
        {
            arr[i][j]=rand() % 25 +1;
            std::cout <<  arr[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

template <int N,int T>
void bar(int(&arr)[N][T])
{
   for(int i = 0 ; i < N ; ++i)
   {
       int min = arr[i][0];
       for(int j = 1 ; j < T; ++j)
       {
           if(max > arr[i][j])
       }
   }
}



int main()
{
    const int size = 4;
    const int size2 = 3;
    int arr[size3][size];
    foo(arr);
    bar(arr);
}