#include <iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main()
{
	srand(time(0));
	int numbery;
	int magic;
	magic= rand()%100;
	do{
	std::cout <<"\t"<< "Input your number "<<"\n";
	std::cin >> numbery;
	std::cout <<"\t"<<"Magic number is "<< magic << '\n';

	if (magic==numbery) {
		std::cout << "You won " << '\n';
	}
	else
	std::cout << "You loose" << '\n';
 if (numbery<magic) {
 	std::cout << "Your number less than magic number" << '\n';
 }
 else
 std::cout << "Your number more than magic number" << '\n';
}
 while(numbery!=magic);
	return 0;
}
