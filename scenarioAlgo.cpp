#include<iostream>
using namespace std;
int main()
{
	int a;
	cout<<"***CHOOSE A LASTNAME***"<<endl;
	cout<<endl;
	cout<<"Enter 1 if you want to choose Agabon"<<endl;
	cout<<"Enter 2 if you want to choose Ibañez"<<endl;
	cout<<endl;
	cin>>a;
	cout<<endl;
	
	if (a == 1){
		cout<<"Scenario 1: Calculate how much the buyer should pay if she/he buy a fish in the market wherein it cost 120per kilo."<<endl;
		cout<<endl;
		
		float b;
		cout<<"Enter a number if how much of kilos you want to buy!"<<endl;
		cin>>b;
		
		float c=b*120;
		
		cout<<endl;
		cout<<"The total price of the rice you bought is"<<c<< "pesos" <<endl;
		
	}
	else if (a == 2){
		cout<<"Scenario 2: You were going to do an interview . "<<endl;
		
		string a, b, c, d, e;
		int z, x;
		
		cout<<"Enter your name:"<<endl;
		cin>>a;
		getline(cin,a);
		
		cout<<"Enter your age:"<<endl;
		cin>>z;
		
		cout<<"Enter your b-date:"<<endl;
		cout<<"mm/dd/yy"<<endl;
		cin>>x;
		cout<<endl;
		
		cout<<"Enter your address:"<<endl;
		cin>>b;
		getline(cin,b);
		cout<<endl;
		
		cout<<"Enter your school:"<<endl;
		cin>>c;
		getline(cin,c);
		cout<<endl;
		
		cout<<"Enter your course:"<<endl;
		cin>>d;
		cout<<endl;
		
		cout<<"Enter your motto in life:"<<endl;
		cin>>e;
		getline(cin,e);
		cout<<endl;	
		
	}
	return 0;
}