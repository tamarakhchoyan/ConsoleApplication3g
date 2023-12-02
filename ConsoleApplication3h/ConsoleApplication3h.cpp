#include <iostream>
int main()
{
	int a;
	int b;
	int c;
	std::cin >> a >> b >> c;
	if((a>0 && b<=0 && c<=0)||(b>0 && a<=0 && c<=0)||(c>0 && a<=0 && b<=0))
	{
		std::cout << "YES";
	}
	else { std::cout << "NO"; }
	return 0;
}