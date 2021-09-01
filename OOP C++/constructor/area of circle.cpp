#include<iostream>
using namespace std;
class abc
{
	private:
		int a;
		public:
			abc(int x)
			{
				a=x;
			}
			void area()
			{
				cout<<"Area of circle="<<3.14*a*a;
			}
};
int main()
{
	int r;
	cout<<"enter value of radius \n";
	cin>>r;
	abc obj(r);
	obj.area();
}
