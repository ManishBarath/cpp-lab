#include<iostream>
class Area{
	protected:
		double l,br;
	public:
		void get(double a,double b){
		 l=a;
		 br=b;
		}
		virtual double Carea(){
			return l*br;
		}
};
class Rect:public Area{
	public:
	double Carea(){
		return l*br;	
	}
};
int main(){
	double len,bre;
	Rect ob;
	std::cout<<"MANISH BARATH M"<<std::endl;
	std::cout<<"Enter the length and breadth of the rectangle:";
	std::cin>>len>>bre;
	ob.get(len,bre);
	std::cout<<"Area:"<<ob.Carea()<<std::endl;
	return 0;
}
