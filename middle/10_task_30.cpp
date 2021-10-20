#include <iostream>
#include <cmath>



template <int N>
void foo(int(&arr)[N])
{
    for(int i = 0 ; i < N ; ++i)
    {
        arr[i] = rand() % 15 ;
        
        std::cout << arr[i] << " " ; 
    }
    std::cout << std::endl;
}


template <int N>
void bar(int(&x)[N],int(&y)[N])
{
    for(int i = 0 ; i < N ; ++i)
    {
        if(cos(x[i])>0)
        {
            y[i]= x[i]* x[i] *x[i] ;
        }
        else
        {
            y[i]= x[i]* x[i] - 5 * exp(sin(x[i]));
        }
        std::cout <<y[i] << " ";
    }
       std::cout << std::endl;
}

template <int T>
void chlp(int(&arr5)[T])
{
    for(int i = 1 ; i < T ; ++i)
    {
        int j = i-1;
        int key = arr5[i] ;
        while (j>=0 and arr5[j] < key)
        {
            arr5[j+1]=arr5[j];
            --j;
        }
        arr5[j+1] = key ;
    }
    for(int i = 0 ; i < T ; ++i)
    {
        std::cout << arr5[i] << "  ";
    }
    std::cout << std::endl;
}



template <int T>
void chlp2(int(&arr5)[T])
{
    for(int i = 1 ; i < T ; ++i)
    {
        int j = i-1;
        int key = arr5[i] ;
        while (j>=0 and arr5[j] > key)
        {
            arr5[j+1]=arr5[j];
            --j;
        }
        arr5[j+1] = key ;
    }
    for(int i = 0 ; i < T ; ++i)
    {
        std::cout << arr5[i] << "  ";
    }
    std::cout << std::endl;

}

template <int N,int T>
void qoo(int(&x)[N],int(&y)[N],int(&arr5)[T])
{
    int k = 0 ;
    int t = 0 ; 
    for(int i = 0 ; i < T; ++i)
    {
        if(i % 2 == 0)
        {
            arr5[i]=x[k];
            k+=2;
        }
        else
        {
            arr5[i] = y[t];
            t+=2;
        }
        std::cout <<arr5[i] <<"  " ;
    }
    std::cout << std::endl;
}















int main()
{
    const int size = 3 ;
    int x[size] = {0} ;
    int y[size] = {0} ;
    int r[size+1] = {0} ;
    foo(x) ;
    bar(x,y);
    chlp(x) ;
    chlp2(y) ;
    qoo(x,y,r);
}










