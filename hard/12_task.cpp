#include <iostream>
#include <vector>

teplate<int N>
void bar(int(&arr)[N])
{
    std::vector<int> vec;
    //int count = 0;

    for(int i = 0 ; i < N ; ++i)
    {
        //int count = 0;
       
        //int br = N;
        if(arr[0][i] < arr[1][i])
        {
            int k = 0;
            int br = N;
            int max = arr[1][i];
            while (arr[0][k] < arr[1][k])
            {
                  if(max <arr[1][k])  
                  {
                    max = arr[1][k] ;
                    --br;
                  }
                  
                  ++k;
            }
            if(br == 0)
            {
                vec.push_back(max);
            }
        }
     }
}

int main ()
{
    const int size = 3;
    //const int size2 = 2
    int arr[size][size]={{1,5,4},{3,8,1},{4,3,9}};
    bar(arr);
}


