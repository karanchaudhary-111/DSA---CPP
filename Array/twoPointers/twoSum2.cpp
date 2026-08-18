#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;

// leet code two sum II -> 167

vector<int> twoSum(vector<int>& numbers, int target) {
    int n = numbers.size();

    int i =  0;
    int j = n-1;

    while(i < j){
        int sum = numbers[i] + numbers[j];

        if(sum == target) {
            return {i+1, j+1};
        }

        if(sum > target){
            j--;
        }else{
            i++;
        }
    }

    return {};
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
    cout <<  "Enter target: ";
    cin >> target;

    vector<int> res = twoSum(nums, target);

    for (int i  = 0; i < res.size(); i++){
        cout << res[i] << " ";
    }
}