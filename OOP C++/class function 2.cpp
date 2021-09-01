#include<iostream>
using namespace std;
class MY
{
	public:
		fun()
		{
			int a;
			cout<<"enter a number";
			cin>>a;
			cout<<"NO\t\tSquare\t\tCube\n";
			cout<<"________\n";
			cout<<a<<"\t\t"<<a*a<<"\t\t"<<a*a*a;
		}
			
		};
		int main()
		{
			MY obj;
			obj.fun();
		}
