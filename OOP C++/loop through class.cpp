#include<iostream>
using namespace std;
class loop
{
	private:
		int a;
		public:
			void input()
			{
				cout<<"No\t\tSquare\t\tCube\t\t\n";
				cout<<"__________________________________\n";
				for(a=0;a<=10;a++)
				{
					cout<<a<<"\t\t"<<a*a<<"\t\t"<<a*a*a<<"\n";
				}
			}
		
};
int main()
{
	loop obj;
	obj.input();
}
