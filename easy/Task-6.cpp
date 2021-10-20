#include <iostream>
#include <string>

int main(){
std:: cout << "Please Enter Your Name"<< std :: endl;
    std::string yourName;
    std:: cin >> yourName;
    for(int i=yourName.size()-1;i>=0;--i){
        std :: cout <<yourName[i];
      }
    return 0;
}
