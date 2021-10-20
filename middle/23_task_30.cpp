    #include <iostream>




template <int N>
void foo(int(&arr)[N])
{
    for(int i = 0 ; i < N ; ++i)
    {
        arr[i] = rand() % 6 +1;
        
        std::cout << arr[i] << " " ; 
    }
    std::cout << std::endl;
}


template <int N>
void bar(int(&y)[N] ,int(&x)[N])
{
       for(int i = 0 ; i < N ; ++i)
       {
           y[i] = x[i] * x[i] +1.3 ;
           std::cout << y[i] <<" " ;
       }
         std::cout << std::endl;
}



template <int N>
void qoo(int(&y)[N] ,int(&x)[N])
{
    long long even = 1;
    long long odd  = 1;
    for(int i = 0 ; i < N ; ++i)
    {
        if(i % 2 == 1)
        {
            even*=y[i] * x[i];
        }
        else
        {
            odd *=y[i] * x[i] ;
        }
    }
    std::cout <<"P " << even / odd << std::endl ;
}






int main()
{
    const int size = 10 ;
    int x[10] = {0} ;
    int y[10] = {0} ;
    foo(x);
    bar(y,x) ;
    qoo(y,x) ;
}