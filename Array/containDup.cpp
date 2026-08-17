#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

bool containDup(vector<int> nums){
    int n = nums.size();

    sort(nums.begin(), nums.end()); // sort in ascending order.

    int curr = nums[0];

    for(int i = 1; i < n; i++){
        if(curr != nums[i]){
            curr =  nums[i];
        }else{
            return true;
        }
    }

    return false;
}

int main(){
    int n;
    cout <<"Enter size: ";
    cin >> n;

    vector<int> nums(n);

    for(int i = 0; i < n; i++){
        cin >> nums[i];
    }

    if(containDup(nums)){
        cout << true;
    }else{
        cout << false;
    }
}