// 선형 시간에 이동 평균 구하기

#include <iostream>
#include <vector>
using namespace std;

vector<double> movingAverage2(const vector<double> &A, int M)
{
   vector<double> ret;
   int N = A.size();
   double partialSum = 0;
   for (int i = 0; i < M - 1; ++i)
   {
      partialSum += A[i];
   }
   for (int i = M - 1; i < N; ++i)
   {
      partialSum += A[i];
      ret.push_back(partialSum / M);
      partialSum -= A[i - M + 1];
   }
   return ret;
}