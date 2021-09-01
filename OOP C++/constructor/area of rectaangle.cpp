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
			void rectangle()
			{
				cout<<"Area of rectangle="<<a*b;
			}
};
int main()
{
	int l,w;
	cout<<"enter value for length and width \n";
	cin>>l>>w;
	abc obj(l,w);
	obj.rectangle();
}
