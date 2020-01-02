#include <iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main()
{
	srand(time(0));
	int i;
	int minN;
	int maxN;
	int N[10];
	for ( i = 0; i < 10; i++) {
	N[i]=rand()%50;
	std::cout << N[i] << ' ';
	}
minN=N[0];
for ( i = 0; i < 10; i++){
	if (minN> N[i])	minN=N[i];}
std::cout<<"\n" << "Minimalnoe znachenie ravno"<<" "<<minN;
maxN=N[0];
for ( i = 0; i < 10; i++) {
if (maxN<N[i]) {
	maxN=N[i];}
}
std::cout <<<< "Maximalnoe znachenie ravno" << ' '<<maxN;
	return 0;
}
