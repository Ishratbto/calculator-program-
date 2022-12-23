#include<iostream>
#include<cmath>
using namespace std;
int sum(int a1,int a2)
{
	return a1+a2;
}
int sub(int a1,int a2)
{
	return a1-a2;
}
int mul(int a1,int a2)
{
	return a1*a2;
}
int dive(int a1,int b2)
{
	return a1/b2;
}
int mod(int a1,int b2)
{
	return a1%b2;
}
int main()
{
	int a1,a2,res1,res2,res3,res4,res5,res6,res7;
	cin>>a1>>a2;
	res1=sum(a1,a2);
	cout<<"sum="<<res1<<endl;
	res2=sub(a1,a2);
	cout<<"subtraction="<<res2<<endl;
	res3=mul(a1,a2);
	cout<<"multiplication="<<res3<<endl;
	res4=dive(a1,a2);
	cout<<"division="<<res4<<endl;
	res5=mod(a1,a2);
	cout<<"remainder="<<res5<<endl;
	res6=sqrt(a1); 
	cout<<"square root="<<res6<<endl;
	res7=log(a1);
	cout<<"logarthim="<<res7<<endl;
	return 0;
}