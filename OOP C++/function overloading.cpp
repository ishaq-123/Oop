#include<iostream>
int sum(int,int,int);
int sum(int,int);
using namespace std;
int main()
{
	cout<<"Function overloading mean parameter & return type change function name is same"<<endl;
	cout<<"Sum of Two Number="<<sum(4,5)<<endl;
		cout<<"Sum of Three Number="<<sum(4,5,6);
	
}
int sum(int a,int b)
{
	return(a+b);
}
int sum(int x,int y,int z)
{
	return(x+y+z);
}
