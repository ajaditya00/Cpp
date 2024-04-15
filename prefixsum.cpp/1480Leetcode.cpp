#include<bits/stdc++.h>
using namespace std;
    vector<int> runningSum(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans;
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=nums[i];
            ans.push_back(sum);
        }
        return ans;
    }

int main(){
    vector<int>arr;
    arr.push_back(1);
    arr.push_back(2);
    arr.push_back(3);
    arr.push_back(4);
    arr.push_back(5);
    vector<int> result = runningSum(arr);
    for (int num : result) {
        cout << num << " ";
    }
    return 0;
}