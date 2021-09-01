#include<iostream>
using namespace std;
class abc
{
	private:
		int m,n;
		public:
			void in()
			{
				cout<<"Enter Two Numbers\n";
				cin>>m>>n;
			}
			void add()
			{
				cout<<"Sum="<<m+n<<endl;
			}
};
int main()
{
	abc obj[3];
	obj[0].in();
	obj[0].add();
	obj[1].in();
	obj[1].add();
	obj[2].in();
	obj[2].add();
}
