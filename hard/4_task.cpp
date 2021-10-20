#include <iostream>

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
void bar(int(&arr)[N][N], int size, int*& chlp)
{
   // int * narr = new int[3];
    int k = 0;
  for(int i = 1; i < N; ++i)
  {
      for(int j = 0; j < i; ++j)
      {
          chlp[k]=arr[i][j];
          std::cout<<chlp[k] << " " ;
          ++k;
      }
  }
   //std::cout<<k<<std::endl;
     for(int i =1 ; i < k ;++i)
     {
         int j = i - 1;
         int key = chlp[i];
         while (j>=0 && chlp[j] > key)
         {
             chlp[j+1] = chlp[j];
             --j;
         }
         chlp[j+1] = key;
         
     }
    std::cout << std::endl;
    for(int i = 0; i < k; ++i)
    {
        std::cout << chlp[i]<<" ";
    }
     std::cout << std::endl;
   // delete []chlp;

}






int main()
{
    const int size = 3 ;
    int arr[size][size]={0};
 
    foo(arr);
    int count = (size*(size-1))/2;
    int *chlp = new int[count];
    bar(arr, count ,chlp);

}









