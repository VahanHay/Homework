#include <iostream>

template <size_t size_of_arr>
int arrayNew(int(&arr)[size_of_arr],int(&arr2)[size_of_arr])
{
    int couner = 0;
    for(int i = 0 ; i < size_of_arr ; ++i)
    {
        arr[i] = rand() % 90 ;
        arr2[i]=arr[i];
        couner+= arr[i] ;
    }
    couner/=12;
    arr2[5]= couner ; 
}






int main()
{
    const int size_of_arr = 12;
    int arr[size_of_arr] = {0} ;
    int arr2[size_of_arr] = {0} ;
    arrayNew(arr,arr2);
    std::cout<<"old arr: ";
    for(int i = 0 ; i <size_of_arr ; ++i)
    {
        std::cout << arr[i] <<" ";
    }
     std::cout<<std::endl<<"new arr: ";
    for(int i = 0 ; i <size_of_arr ; ++i)
    {
        std::cout << arr2[i] <<" ";
    }
    std::cout<<std::endl;
}