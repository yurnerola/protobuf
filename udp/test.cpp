#include <iostream>
#include <string>

using namespace std;
int main()
{
	char str[10]="\0asabc";
	string stra(str);
	cout<<stra.size()<<endl;
	cout<<stra.length()<<endl;
	return 0;
}
