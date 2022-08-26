/*Vaibhav Puri
  2010991403
  Test-04

*/
#include <iostream>
#include <unordered_set>
using namespace std;


int
findMinIndex (int arr[], int n)
{
  int minIndex = n;

  unordered_set < int >set;

  for (int i = n - 1; i >= 0; i--)
    {
      if (set.find (arr[i]) != set.end ())
	{
	  minIndex = i;
	}
      else
	{
	  set.insert (arr[i]);
	}
    }

  if (minIndex == n)
    {
      return -1;
    }
  return minIndex;
}

int
main ()
{
  int arr[] = { 1,2,3,4,5 };

  int n = sizeof (arr) / sizeof (arr[0]);

  int minIndex = findMinIndex (arr, n);

  if (minIndex != n)
    {
      cout << "The minimum index of the repeating element is " << minIndex;
    }
  else
    {
      cout << "Invalid Input";
    }
  return 0;
}

