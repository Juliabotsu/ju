#include <iostream>
#include<cstdlib>
#include<ctime>
#include "cmath"
using namespace std;
int main()
{
int i;
for (i=0 ; i < 100 ;i++) {
if(i%2) continue;
std::cout << i << '\n';
}
return 0;
}
