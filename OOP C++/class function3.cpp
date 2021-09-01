#include<iostream>
using namespace std;
class abc
{
	public:
		fun()
		{
			int Length,Width,Area;
			cout<<"Enter Length and Width \n";
			cin>>Length>>Width;
			Area=Length*Width;
			cout<<"Result="<<Area;
		}
			
		};
		int main()
		{
			abc obj;
			obj.fun();
		}
