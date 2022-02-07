#include <iostream>
#include <string>

using namespace std;

void countoff(int n)
{
  if(n == 0) cout << "Blast-off";
  else cout << n;
  countoff(n-1);
}

main