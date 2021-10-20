#include <iostream>
#include <string>
int main(){
std :: cout << " Enter Your Name " << std :: endl;
std :: string word;
std :: cin >> word;
for(int i=word.size()-1;i>=0; i--)
   std:: cout <<word[i];

return 0;
} 
