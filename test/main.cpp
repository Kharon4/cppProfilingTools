#include<iostream>
#include<timer.h>


int main() {
	std::cout << "hello world \n";
	{
		timer t;
		for (long long int i = 0; i < 1000000000; ++i);

	}
	
	system("pause");
	return 0;
}