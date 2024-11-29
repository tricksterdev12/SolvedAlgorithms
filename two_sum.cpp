#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> pos;
        int sum=0;
        for(int i=0;i<nums.size()-1;i++){
            for(int j=i+1;j<nums.size();j++){
                if(nums[i]+nums[j]==target){
                    pos.push_back(i);
                    pos.push_back(j);
                    break;
                }   

            }
        }

      return pos;  
    }
};