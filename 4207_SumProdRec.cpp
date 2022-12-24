// Requirement
// Write the recursive function with the header

// long long SumProdRec(int n)
// which, receiving as a parameter a non-zero natural number n, returns the sum value 1•2 + 2•3 + ... (n-1)•n.

// Restrictions and clarifications
// 2 ≤ n ≤ 10.000
// The name of the function is SumProdRec.
// It is recommended to use recursion in solving the problem.

// Example
// SumProdRec(4) = 20.

#include <iostream>
using namespace std;

long long SumProdRec(int n)
{
  if (n == 0)
    return 0;
  else
    return n * (n - 1) + SumProdRec(n - 1);
}

int main()
{
  int n;
  cin >> n;
  cout << SumProdRec(n);
  return 0;
}