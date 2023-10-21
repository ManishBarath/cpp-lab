#include<iostream>
int main(){
	int a,b,h=0;
	std::cout<<"MANISH BARATH M"<<std::endl;
	std::cout<<"Enter two numbers:";
	std::cin>>a>>b;
	if( a>b){
		int temp=b;
		b=a;
		a=temp;
	}
	for(int i=1;i<=a;i++){
		if(a%i==0 && b%i==0){
			 h=i;
		}
	}
	std::cout<<"The HCF of two numbers is:"<<h;
	return 0;
}
