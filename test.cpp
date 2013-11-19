#include <iostream>

using namespace std;


struct stu
{
	int c;
	char b;
};

void * func1();
void func2(void *);

int main()
{
	struct stu* a=(struct stu *)func1();
	cout<<a->c<<endl;
	return 1;
}


void * func1()
{
	struct stu a;
	a.c=11;
	a.b='a';
	return (void *)&a;
}
