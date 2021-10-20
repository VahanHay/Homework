#include <iostream>
//  anellll
template <int N,int T>
void foo(int(&arr)[N][T])
{
    
    for(int i = 0; i < N; ++i)
    {
        
        for(int j = 0; j < T; ++j)
        {
            
            arr[i][j]=  % 25;
            std::cout <<  arr[i][j] << " ";
        }
        std::cout << std::endl;
    }
}





int main()
{
   const int row = 5;
   const int col = 10;
   int arr[row][col];
   foo(arr);
   bar(arr);
}

