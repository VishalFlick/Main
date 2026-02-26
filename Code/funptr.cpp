#include<iostream>

void(*Demo)(int, int);

void x(int a, int b)
{
	std::cout << a << ", " << b << "\n";
}

void y(int a, int b)
{
	if(a > b){ std::cout << a << " is bigger\n"; }
	else if(b > a) { std::cout << b <<  " is bigger\n"; }
	else{std::cout<< a << " and "<< b << "are equal\n"; }
}

int main()
{
	using Test = void(*)(int, int);
	Test xp = x;
	x(2, 4);
	Test yp = y;
	y(10, 9);

	//Demo = x;
	//Demo(2, 3);
	//Demo = y;
    //Demo(10, 4);

	return 0;
}