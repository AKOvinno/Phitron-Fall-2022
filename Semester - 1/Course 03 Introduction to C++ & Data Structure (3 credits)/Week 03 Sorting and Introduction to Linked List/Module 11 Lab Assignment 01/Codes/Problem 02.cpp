#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i, num, input, sum1 = 0, sum2 = 0, missing;
	cin >> num;
	for(i = 1; i < num; i++) {
    	cin >> input;
    	sum1 += input;
	}
	for(i = 1; i <= num; i++) {
    	sum2 += i;
	}
	cout << sum2-sum1 << "\n";
	return 0;
}
