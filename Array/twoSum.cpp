#include <iostream>
#include <vector>
#include <algorithm>
#include <map>   

using namespace std;

vector<int> twoSum(vector<int>arr, int target){
    int n = arr.size();
    map<int, int> mp;

    for(int i = 0; i < n; i++){
        int x = target - arr[i];

        if(mp.find(x) != mp.end()){
            return {mp[x], i};
        }

        mp[arr[i]] = i;
    }

    return {};
}

int main(){
    int n ;
    cout << "Enter size: ";
    cin >> n;

    vector<int>arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int target;
    cout <<"Enter target: ";
    cin >> target;

    vector<int>ans = twoSum(arr, target);


    if(ans.empty()) cout << "No pair found" << endl;

    cout << "{";

    for(int i = 0; i < ans.size(); i++){
        cout << ans[i] << " ";
    }
    cout <<"}";
}