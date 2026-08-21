#include<bits/stdc++.h>

using namespace std;

vector<int> spiralOrder(vector<vector<int>>& matrix) {
        
}

int main(){
    int n;
    cout <<"Enter row: ";
    cin >> n;

    int m;
    cout <<"Enter column: ";
    cin >> m;

    vector<vector<int>> matrix(n, vector<int>(m));

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> matrix[i][j];
        }
    }

    rotate(matrix);
}