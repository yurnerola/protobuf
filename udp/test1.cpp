#include <iostream>
#include <string>

using namespace std;

int main()
{
	string a="cc\0sd";
	cout<<a.size()<<endl;
	return 0;
}
