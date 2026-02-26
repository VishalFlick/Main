#include<iostream>


int main()
{
	int n;
	std::cout<<"Enter a Number: "<<"\n";
	std::cin>>n;

	bool isPrime = true;

	for(int i = 2; i < n; i++)
	{
		if(n%i==0)
		{
			isPrime = false; 
			break;
		}
	}
	if(isPrime)std::cout<<"Prime"<<"\n";
	else std::cout<<"Not Prime"<<"\n";

	return 0;
}