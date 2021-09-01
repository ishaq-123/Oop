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
int main()
{
	number obj;
	obj.input();
	obj.output();
}


