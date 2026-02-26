#include<iostream>


int main()
{
	int n;
	int count = 0;
	std::cout<<"Enter a Number: "<<"\n";
	std::cin>>n;

	while(n > 0)
	{
		count++;
		n = n / 10;
	}
	std::cout<<"Digit Count: "<<count;

	return 0;
}