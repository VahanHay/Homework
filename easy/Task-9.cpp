#include <iostream>
#include <string>
#include <vector>

int main()
{ 
    std::vector<char> myvector;
    std::string a;
    std::cin>>a;
     for(int i=1;i<a.size();i=i+2) {
    if(a[i]>=97 && a[i]<=122){
        myvector.push_back((char)(a[i]-32));
        }
        else if(a[i]>=65 && a[i]<=90) {
          myvector.push_back(a[i]);
        } 
    }
       
             
    
   
    std::cout << std::endl;
    return 0;
}


