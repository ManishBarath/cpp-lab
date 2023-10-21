#include<iostream>
int main(){
       int n;
       std::cout<<"MANISH BARATH M"<<std::endl;
       std::cout<<"Enter a number:";
       std::cin>>n;
       bool prime=true;
       if(n==1 ||n==0){
       	prime=false;
	   }
	   for(int i=2;i<=n/2;i++){
	   	if(n%i==0){
	   		prime=false;
		   }
	   }
	   if(prime==true){
	   	std::cout<<"The given number is a prime."<<std::endl;
	   }
	   else{
	   	std::cout<<"The given number is a not prime."<<std::endl;
	   }
}
