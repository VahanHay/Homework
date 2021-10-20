#include <iostream>
#include <ctime>

template <int N>
void foo(int(&arr)[N][N])
{
    for(int i = 0; i < N; ++i)
    {
        for(int j = 0; j < N; ++j)
        {
            arr[i][j]=rand() % 25 +(-6);
            std::cout <<  arr[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

template <int N>
void bubile_sort(int(&arr)[N][N])
{

    for(int k = 0; k < N*N-1; ++k)
    {
        for(int i = 0; i < N; ++i)
      {
        for(int j = 0; j <N-1 ; ++j)
        {
            if(arr[i][j] > arr[i][j+1])
            {
                std::swap(arr[i][j] , arr[i][j+1]);
            }
        }
        if(i!=2)
        {
            if(arr[i][N-1] < arr[i+1][0])
            {
                std::swap(arr[i][N-1] , arr[i+1][0]);
            }
        }
      }
    }
       for(int i = 0; i < N; ++i)
    {
        for(int j = 0; j < N; ++j)
        {
            //arr[i][j]=rand() % 25 +(-6);
            std::cout <<  arr[i][j] << " ";
        }
        std::cout << std::endl;
    }

}

template <int N>
void intertion_sort(int(&arr)[N][N])
{
    int t = 0;
    int f = 0;
    int t1 = 0;
    int f1 = 0;
    for(int i = 0 ; i< N*N-1 ; ++i)
    {
       f=f1;
       t=t1;
        for(int k = 0; k < N ; ++k)
        {
            for(int j = 0 ; j < N; ++j)
            {
                if(arr[t][f] > arr[k][j])
                {
                    t = k;
                    f = j;
                }
            }
        }
        if(f1==N)
        {
            ++t1;
            f1 = 0;
            std::swap(arr[t1][f1] ,arr[t][f]);
        }
        else
        {
             std::swap(arr[t1][f1] ,arr[t][f]);
             ++f1;
        }
    }
}


int main()
{
    //srand((int)time(0));
    const int size = 3 ;
    int arr[size][size]={0};
    int arr2[size][size] = {0};
    foo(arr);
    std::cout << std::endl;
    bubile_sort(arr);
    std::cout << std::endl;
    foo(arr2);
    std::cout << std::endl;
    intertion_sort(arr2);
     for(int i = 0; i < size; ++i)
    {
        for(int j = 0; j < size; ++j)
        {
            //arr[i][j]=rand() % 25 +(-6);
            std::cout <<  arr2[i][j] << " ";
        }
        std::cout << std::endl;
    }
}