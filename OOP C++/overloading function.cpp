#include<iostream>
using namespace std;
class sallary
{
	private:
		float sal;
		public:
			void input()
			{
				cout<<"Enter Your Sallary\n";
				cin>>sal;
			}
			void output()
			{
				if(sal<10000)
				{
					sal+=200;
				}
				else
				{
					sal+=100;
				}
				cout<<"Net sallary="<<sal;
			}
			};
int main()
{
	sallary obj;
	obj.input();
	obj.output();
}


