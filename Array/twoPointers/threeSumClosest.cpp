#include<bits/stdc++.h>
using namespace std;

    int threeSumClosest(vector<int>& nums, int target) {
        
        int n = nums.size();

        sort(nums.begin(), nums.end());
        int ans = nums[0] + nums[1] + nums[2];

        for(int i = 0; i < n-2; i++){
            int a = nums[i];
            int left  = i+1;
            int right = n-1;

            while(left < right){
                int sum = nums[i] + nums[left] + nums[right];

                if(abs(target - sum) < abs(target - ans)){
                    ans = sum;
                }

                if(sum > target){
                    right--;
                }else if(sum < target){
                    left++;
                }else{
                    return sum;
                }
            }
        }

        return ans;
    }

int main(){
     int n;
    cout <<"Enter size: ";
    cin >> n;

    vector<int> nums(n);

    for(int i = 0; i < n; i++){
        cin >> nums[i];
    }

    int target;
    cout <<"Enter the target: ";
    cin >> target;

    int res = threeSumClosest(nums, target);
        cout << res << " ";
}