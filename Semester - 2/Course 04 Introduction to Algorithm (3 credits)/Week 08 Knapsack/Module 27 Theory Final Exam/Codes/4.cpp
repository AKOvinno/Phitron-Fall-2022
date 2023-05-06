#include<bits/stdc++.h>
using namespace std;

int robHelper(vector<int>& nums, int start, int end, vector<int>& memo)
{
    if (start > end) {
        return 0;
    }
    if (memo[start] != -1) {
        return memo[start];
    }
    int prev1 = 0, prev2 = 0, curr = 0;
    for (int i = start; i <= end; i++) {
        curr = max(prev2 + nums[i], prev1);
        prev2 = prev1;
        prev1 = curr;
    }
    memo[start] = curr;
    return curr;
}

int rob(vector<int>& nums)
{
    int n = nums.size();
    if (n == 1) {
        return nums[0];
    }
    vector<int> memo(n, -1);
    int max1 = robHelper(nums, 0, n-2, memo);
    fill(memo.begin(), memo.end(), -1);
    int max2 = robHelper(nums, 1, n-1, memo);
    return max(max1, max2);
}

int main()
{
    int input;
    cout << "Number of inputs: ";
    cin >> input;
    vector<int> a;
    for(int i = 0; i < input; i++) {
        int num;
        cin >> num;
        a.push_back(num);
    }
    cout << rob(a) << "\n";
    return 0;
}
