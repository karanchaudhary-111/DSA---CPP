#include <iostream>
#include <vector>

using namespace std;

vector<int> getConcatenation(vector<int>& nums) {
    int n = nums.size();
    vector<int> ans(2*n);

    for(int i = 0; i < n; i++){
        ans[i]   = nums[i];
        ans[n+i] = nums[i];
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

    vector<int> res = getConcatenation(nums);

    for (int i  = 0; i < res.size(); i++){
        cout << res[i] << " ";
    }
}