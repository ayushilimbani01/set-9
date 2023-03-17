#include<iostream>
#include<string.h>

using namespace std;

class point
{
	public :
		int k;
		void set(int n)
		{
			this->k=n;
		}
		void get()
		{
			cout<<"K="<<this->k<<endl;
		}
		point operator++(int)
		{
			point temp;
			temp.k=this->k++;
		}
};

int main()
{
	point o1,o2;
	o1.set(2);
	o1.get();
	o2=o1++;
	o1.get();
		
	return 0;
	
}
