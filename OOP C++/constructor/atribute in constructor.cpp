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
			void display()
			{
				cout<<a;
			}
};
int main()
{
	abc obj(6);
	obj.display();
}
