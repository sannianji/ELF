#include<iostream>
using namespace std;
class test
{
public:
	void add()
	{
		i++;
		return;
	}
	int out()
	{
		return i;
	}
	
private:
	static int i;
};
int test::i=0;
int main()
{
	test test1,test2;
	test1.add();
	cout<<test2.out()<<endl;
	test2.add();
	cout<<test1.out()<<endl;
	return 0;
}
