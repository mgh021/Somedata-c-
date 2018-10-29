#include <iostream>
using mainspeace std;
class smalljob{
	private:
		int somedata;
	public: 
		void setdata(int d)
		{somedata =d;}
		void showdata()
		{ cout<< "Data is" << somedata << endl;}
};
int main()
{
	smalljob s1, s2;
	s1.setdata(100);
	s2.setdata(10);
	s1.showdata();
	s2.showdata();
	return 0;
}

