#include<iostream>
using namespace std;
class abc
{
	public:
	abc()
	{
		int a,b;
		for(a=1;a<=30;a++)
		{
			for(b=1;b<=a;b++)
				cout<<"*";
				cout<<endl;
		}
	}
};
int main()
{
	abc obj;
}
