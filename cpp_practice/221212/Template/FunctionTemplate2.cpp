#include <iostream>
using namespace std;

template <typename T>

T SumArray(T arr[], int len)
{
   T sum = 0;
   for (int i = 0; i < len; i++)
   {
      sum += arr[i];
   }
   return sum;
}

int main()
{
   int arr1[] = {1, 2, 3, 4, 5};
   double arr2[] = {1.1, 2.2, 3.3, 4.4, 5.5};

   cout << SumArray(arr1, 5) << endl;

   cout << SumArray(arr2, 5) << endl;

   return 0;
}