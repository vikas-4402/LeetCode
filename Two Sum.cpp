#include<iostream>
#include<vector>
using namespace std;

class Solution{
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> v;
        int n=nums.size();
        for(int i=1;i<n;i++){
            for(int j=0;j<i;j++){
                int sum =nums[i]+nums[j];
                if(sum==target){
                    v.push_back(i);
                    v.push_back(j);
                    break;
                }
            }
        }
    return v;
    }
};
int main(){
    vector <int> nums{2,7,11,15};
    int target = 9;
    Solution s;
    vector<int> ans= s.twoSum(nums,target);
    for(auto x:ans){
        cout << x <<" ";
    }
    return 0;
}
