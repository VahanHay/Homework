#include <iostream>

#include <cmath>
int main()
{
int count=0;
int myNumber=0;

std::cin>>myNumber; 

int tmp = myNumber;//123

while(tmp){
	tmp=tmp/10;
	count++; 
}

for(int i=count;i>0;i--){
	int k=myNumber/pow(10,i-1);
 	myNumber=myNumber-k*pow(10,i-1);
	std::cout<<k<<std::endl;
}
  return 0;
}
