/**************************************
41. 연속된 자연수의 합
입력으로 양의 정수 N이 입력되면 2개 이상의 연속된 자연수의 합으로 정수 N을 표현하는 방법의 가짓수를 
출력하는 프로그램을 작성하세요. 
만약 N=15이면 7+8=15 4+5+6=15 1+2+3+4+5=15 와 같이 총 3가지의 경우가 존재한다.
▣ 입력설명 
첫 번째 줄에 양의 정수 N(7<=N<1000)이 주어진다.
▣ 출력설명 
첫줄부터 각각의 경우의 수를 출력한다. 맨 마지막 줄에 총 개수를 출력한다.
▣ 입력예제 1                                  
15
▣ 출력예제 1
7 + 8 = 15 
4 + 5 + 6 = 15 
1 + 2 + 3 + 4 + 5 = 15 
3
***************************************/
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
	int n;
	scanf("%d", &n);
	int i, tmp, cnt = 0, b=1;
	tmp = n;
	n--;
	while(n>0)
	{
		b++;
		n = n-b;
		if(n%b==0)
		{
			for(i=1; i<b; i++)
			{
				printf("%d + ", (n/b) + i);
			}
			printf("%d = %d\n", (n/b) + i, tmp );
			cnt++;
		}
		
	}
	printf("%d\n", cnt);
	return 0;
}
