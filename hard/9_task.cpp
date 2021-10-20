#include <iostream>

template <int N>
void foo(int(&arr)[N][N])
{
    for(int i = 0; i < N; ++i)
    {
        for(int j = 0; j < N; ++j)
        {
            arr[i][j]=rand() % 15 +1;
            std::cout <<  arr[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

template <int N>
void bar(int(&arr)[N][N])
{
    int max= 0; 
  
  for(int i = 0 ; i < N-1 ; ++i)
  {    max = i;
      int j = 0;
      for(j = N-1; j >i ; --j)
      {
          if(arr[max][N-1] < arr[j][N-1])
          {
            
              max = j;

          }
      }
      std::cout << std::endl;
     if(max!= i){
         for(int k =0  ; k < N ; ++k)
         {
             std::swap(arr[i][k],arr[max][k]);
         }
     }
      
  }
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
    const int size = 3;
    int arr[size][size];
    foo(arr);
    bar(arr);

}