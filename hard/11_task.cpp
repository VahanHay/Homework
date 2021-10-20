#include <iostream>
#include <vector>

struct point_3
{
    int x;
    int y;
    int val;
};

template <int N,int T>
void foo(int(&arr)[N][T])
{
    
    for(int i = 0; i < N; ++i)
    {
        
        for(int j = 0; j < T; ++j)
        {
            
            arr[i][j]= rand() % 24;
            std::cout <<  arr[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

template <int N,int T>
void bar(int(&arr)[N][T])
{
   std::vector<point_3> tmp;
   
   
   for(int i = 0 ; i < N ; ++i)
   {
       point_3 t;
        t.x =0 ;
        t.y = 0;
        t.val =arr[i][0];
       int min = arr[i][0];
       for(int j = 1 ; j < T-1 ; ++j)
       {
           if(min > arr[i][j+1])
           {
               min = arr[i][j+1];
               t.x=i;
               t.y=j+1;
               t.val=min;
           }
       }
       tmp.push_back(t);
   } 
  
   int k = 0 ;
     for(int i =1 ; i <tmp.size(); ++i)
   {
           if(tmp[k].val < tmp[i].val)
           {
               k = i;
           }
   }
   std::cout <<" x is: " << tmp[k].x <<"  "  << " y is: " << tmp[k].y <<"  "<<  " val is: " << tmp[k].val <<std::endl; 
   std::cout << std::endl;
}


int main()
{
    const int row = 3;
    const int col = 5;
    int arr[row][col];
    foo(arr);
    bar(arr);
}