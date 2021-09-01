#include<iostream>
using namespace std;
class abc
{
	private:
		int a;
		int b;
		public:
			abc(int x,int y)
			{
				a=x;
				b=y;
			}
			void sum()
			{
				cout<<"sum="<<a+b<<endl;
			}
				void sub()
			{
				cout<<"subtract="<<a-b<<endl;
			}
				void divide()
			{
				cout<<"divide="<<a/b<<endl;
			}
				void multiple()
			{
				cout<<"multiple="<<a*b<<endl;
			}
};
int main()
{
	int p,q;
	cout<<"enter value \n";
	cin>>p>>q;
	abc obj(p,q);
	obj.sum();
	obj.sub();
	obj.divide();
	obj.multiple();
}
