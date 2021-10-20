#include <iostream>
#include <string>
#include <vector>

int main()
{ 
    std::vector<char> myvector;
    std::string a;
    std::cin>>a;
     for(int i=0;i<a.size();i++) {
    if(a[i]>=97 && a[i]<=122){
        myvector.push_back((char)(a[i]-32));
        }
        else if(a[i]>=65 && a[i]<=90) {
          myvector.push_back(a[i]);
        } 
    }
       
             
    
   
    std::cout <<a<< std::endl;
    return 0;
}


