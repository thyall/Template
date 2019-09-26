#include <iostream>

template <typename itr>
itr copy(itr first, itr last, itr d_first)
{	
	while(first != last)
	{
		*d_first = *first;
		first++;
		d_first++;
	}

	return d_first;
}




//cliente
int main(int argc, char const *argv[])
{
	//int A[] = {1,2,3,5,4,8,7,54,-5,3};
	double B[] = {2.5, 3.4, 4.8, 8.8,-3.2, -1.5, 10.89, 7.8, 5.5,45.8}; //recebendo ambos os tipos
	double C[10];

	for(int i = 0; i < 10; ++i)
	{
		std::cout << B[i] << " ";
	}
	std::cout << std::endl;

	auto last = copy(std::begin(B), std::end(B), std::begin(C));

	for(int i = 0; i < 10; ++i)
	{
		std::cout << C[i] << " ";
	}
	std::cout << std::endl;
	                                     
	
	return 0;
}