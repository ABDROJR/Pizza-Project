#include<iostream>
using namespace std;

class pizza{
	double	totalprice;
	double	price_topping;
	double topping_c;
	double topping_p;
public:
	string psize[3]={"small","medium","large"};
	string ptype[3]={"deep dish","hand toast","pan pizza"};
	pizza(){
	totalprice=0;
	price_topping=0;
	topping_c=0;
	topping_p=0;
	}
	void settopping_c(int c_t)
	{
		topping_c=c_t;
	}
	int gettopping_c(){
		return topping_c;
	}
	void settopping_p(int p_t)
	{
		topping_p=p_t;
	}
	int gettopping_p(){
		return topping_p;
	}
	void calc_price(int psize,int c_t,int p_t){
		double sum=0;
		
		//Setter for price
		switch(psize){
			case 1:
				sum+=10+(2*c_t)+(2*p_t);
//				sum+=;
			break;
			case 2:
				sum+=14+(2*c_t)+(2*p_t);
			break;
			case 3:
				sum+=17+(2*c_t)+(2*p_t);
			break;
		}
		totalprice=sum;
	}
	int get_price(){
		return totalprice;
	}
};

int main(){
	int psize;
	cout<<"Order Pizza";
	cout<<"Enter Pizza size\n1)Small\n2)Medium\n3)Large\nChoice: ";
	cin>>psize;
	pizza p1;
	p1.psize[psize];
//	cout<<size;
	int ptype;
	cout<<"Enter Pizza Type\n1)Deep Dish\n2)Hand Toast\n3)Pan Pizza\nChoice: ";
	cin>>ptype;
	p1.ptype[ptype];
//	cout<<ptype;
	int c_t;
	cout<<"How many Cheese Toppings : ";
	cin>>c_t;
	p1.settopping_c(c_t);
//	cout<<p1.gettopping_c();
	int p_t;
	cout<<"How many Peperoni Toppings : ";
	cin>>p_t;
	p1.settopping_p(p_t);
//	cout<<p1.gettopping_p();
	p1.calc_price(psize,c_t,p_t);
	
	cout<<"Total is : "<<p1.get_price();
	
	
	
}