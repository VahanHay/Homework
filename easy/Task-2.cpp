#include <iostream>
int main()
{
    int myNumber=0;
    std::cout<<"Please Enter Your Number"<<std::endl;
    std::cin>>myNumber;
    std::cout<<"This is Your Number Revers In Sequnce"<<std::endl;
    while(myNumber>0){
        int k=myNumber%10;
        std::cout<<k;
        myNumber=myNumber/10;
    }
    return 0;
}
