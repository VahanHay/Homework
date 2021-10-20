#include <iostream>
#include <vector>


template <int N>
void foo(int(&arr)[N])
{
    for(int i = 0 ; i < N ; ++i)
    {
        arr[i] = rand() % 4 ;
       
        std::cout << arr[i] << " " ; 
    }
    std::cout << std::endl;
}


template <int N>
void bar(int(&arr)[N],int*&arr2)
{
 
    std::vector<int> vec;

    for(int i = 0 ; i < N - 1 ; ++i)
    {
        for(int j = N - 1 ; j >= i+1 ; --j)
        {
            if(arr[j] > arr[j-1])
            {
                int tmp = arr[j] ;
                arr[j] = arr[j-1] ;
                arr[j-1] = tmp ;
            }
        }
    }
     for(int i = 0 ; i < N ; ++i)
    {
      
        
        std::cout << arr[i] << " " ; 
    }
    std::cout << std::endl;
    int k = arr[0];
    int count = 1;
    for(int i = 0 ; i < N  ; ++i)
    {
        k=arr[i];
        while ( i < N and k == arr[i] )
        {
            ++count;
            ++i;
        }
        if(count < 3)
        {
            for(int  j =0 ; j<count ;++j)
            {
                vec.push_back(arr[i-1]);
            }
            
            //std::cout<<vec[0]; 
        }
       
       count = 1;
    }
  
    if(arr[N-1] != arr[N-2])
    {
        vec.push_back(arr[N-1]);
    }
    arr2 =  new int[vec.size()];
    //std::cout << "size  "  << vec.size();
    for(int i = 0 ; i < vec.size(); ++i)
    {
        arr2[i]=vec[i];
        std::cout << arr2[i] << " " ;
    }
}




















int main()
{

    const int size = 10;
    int arr[size] = {0} ;
    int * arr2 = nullptr ;
    foo(arr);
    bar(arr,arr2);
}