#include <iostream>

//This program can say even elements you have in your array
int countEven(int count)
{
    while(count <=0)
    {
        std::cout << "Array can not be less then 1 element please try agein" << std::endl;
        std::cout <<  std::endl ;
        std::cin >> count ;
    }
    int *arr=new int[count] ;
    int even_count = 0 ;
    for(int i = 0 ; i < count ; ++i)
    {
        arr[i] = rand() % 90 ;
        if(arr[i] % 2 == 0)
        {
            ++even_count;
        }
    }
    for(int i = 0 ; i < count ; ++i)
    {
        std::cout << arr[i] << " "  ;
    }
    delete []arr ;
    return even_count ;
    
}

int main()
{
    int count_of_array = 0;
    std::cout << "Please Enter size of your array " << std::endl;
    std::cout << std::endl;
    std::cin >> count_of_array ;
    std::cout << std::endl;
    std::cout << countEven(count_of_array) << std::endl;
}