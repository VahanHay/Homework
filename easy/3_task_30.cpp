#include <iostream>

template <int N>
int hightThenAverage(int(&arr)[N])
{
    int count =0 ; 
    int average = 0 ;
    for(int i = 0 ; i < N ; ++i)
    {
        average += arr[i]; 
    }
    average/= N ;
    for(int i = 0 ; i < N ; ++i)
    {   
        if (abs(arr[i]) > average)
        {
            ++count;
        }
    }
    std::cout <<"The average " <<average <<std::endl ;
    std::cout <<std::endl ;
    return count ;
}









int main()
{
    const int size = 11;
    int arr[11]={-1,2,4,7,5,-8,11,-22,21,3,10};
    std::cout << hightThenAverage(arr) <<" Is the number of elements whose absolute value is greater than the arithmetic average: " << std::endl ;
}