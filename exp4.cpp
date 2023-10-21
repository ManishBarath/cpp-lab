#include<iostream>
#include<typeinfo> #include<string>
int add(int a,int b){  return a+b;  }
float  add(float a,float  b){  return a+b;}	
std::string add(std::string a,std::string b){  return a+b;  }
int main(){
    int c,n1,n2; float  d1,d2; std::string s1,s2;
    while(true){
	std::cout<<"Choose the type of input you want to give:"<<"\n";
	std::cout<<"1.integer"<<"\n"<<"2.double"<<"\n"<<"3.string"<<"\n"<<"4.Exit"<<"\n";
	std::cin>>c;
	if (c==4){break;}
	std::cout<<"Enter two numbers:";
	switch(c){
		case 1:
			std::cin>>n1>>n2;
	        	if (typeid(n1)==typeid(int)){
			      int i=add(n1,n2);
	    	      std::cout<<"Integer:"<<i<<"\n";    }
		        else{std::cout<<"Invalid Output.";	}  break;
		case 2:
			std::cin>>d1>>d2;
		         if(typeid(d1)==typeid(float)){
                	float d=add(d1,d2);			
		            std::cout<<"float:"<<d<<std::endl;  	}
				else{std::cout<<"Invalid Output.";}	break;			
		case 3:
			std::cin>>s1>>s2;
            if (typeid(s1)==typeid(std::string)){
                std::string st=add(s1,s2);    	
		        std::cout<<"String:"<<st<<std::endl;    }	
			 else{	std::cout<<"Invalid Output.";}	break;	}    	
	}	return 0;}
