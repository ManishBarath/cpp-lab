#include<iostream>

using namespace std;
int main(){
	string d="*";
	int n,c;
	std::cout<<"MANISH BARATH M"<<endl;
	std::cout<<"Enter the number of rows:";
	std::cin>>n;
	std::cout<<"Choose the type of triangle:"<<endl;
	std::cout<<"1.half pyramid."<<endl;
	std::cout<<"2.equtorial triangle."<<endl;
	std::cin>>c;
	if (c==1){
	 for (int i=1;i<=n;i++){
		for (int j=0;j<i;j++){
			std::cout<<d;
		}
		std::cout<<endl;
	}
	}
	else if(c==2){
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n-i;j++){
				std::cout<<" ";
			}
		for(int k=1;k<=2*i-1;k++){
			std::cout<<d;
		}
		std::cout<<endl;
		}
	}	
	return 0;
}
