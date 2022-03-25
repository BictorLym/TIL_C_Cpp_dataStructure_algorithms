/******************************************************************************************
<백준 15596> 정수 N개의 합


정수 n개가 주어졌을 때, n개의 합을 구하는 함수를 작성하시오.

작성해야 하는 함수는 다음과 같다.

C, C11, C (Clang), C11 (Clang): long long sum(int *a, int n);
a: 합을 구해야 하는 정수 n개가 저장되어 있는 배열 (0 ≤ a[i] ≤ 1,000,000, 1 ≤ n ≤ 3,000,000)
n: 합을 구해야 하는 정수의 개수
리턴값: a에 포함되어 있는 정수 n개의 합
C++, C++11, C++14, C++17, C++ (Clang), C++11 (Clang), C++14 (Clang), C++17 (Clang): long long sum(std::vector<int> &a);
a: 합을 구해야 하는 정수 n개가 저장되어 있는 배열 (0 ≤ a[i] ≤ 1,000,000, 1 ≤ n ≤ 3,000,000)
리턴값: a에 포함되어 있는 정수 n개의 합

******************************************************************************************/
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
long long sum(vector<int> &a)
{
	long long ans = 0;
	for(vector<int>::iterator iter = a.begin(); iter < a.end(); iter++)
	{
		ans += *iter;
	}
	return ans;
}
