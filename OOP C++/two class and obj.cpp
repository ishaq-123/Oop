#include<iostream>
using namespace std;
class number
{
	private:
		char num;
		public:
			void input()
			{
				cout<<"Enter Your character\n";
				cin>>num;
			}
			void output()
			{
				if(((num>='a')&&(num<='z')) || ((num>='A')&&(num<='Z')))
				{
					cout<<" Alphabet\n";
				}
				
				else if((num>='0')&&(num<='9'))
				{
					cout<<"Digit\n";
				}
				else
				{
					cout<<"Symbol";
				}
				
			}
			};
	
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
	number obj1;
	obj1.input();
	obj1.output();
	sallary obj2;
	obj2.input();
	obj2.output();
	}
