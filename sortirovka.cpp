#include <iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main()
{
	srand(time(0));
	int i,a,b;
	int minN;
	int maxN;
	int N[10];
	int size=10;
	for ( i = 0; i < 10; i++) {
	N[i]=rand()%50;
	std::cout << N[i] << ' ';
	}
for ( a = 0; a < size; a++) {
	for (b=size-1;b>=a;b--) {
	if (N[b-1]>N[b]) {
		i=N[b-1];
		N[b-1]=N[b];
		N[b]=i;
	}
	}
}
std::cout << "\n" << "Otsortirovanniy"<<"\n";
for (i= 0; i< 10; i++) {
std::cout << N[i] << ' ';}
	return 0;
}
