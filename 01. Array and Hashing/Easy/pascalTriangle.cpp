#include<iostream>
#include<vector>
using namespace std;

vector<vector<int>> pascalTriangle(int n){
        vector<vector<int>>ans(n);
        for(int i=0; i<n;i++){
            ans[i].resize(i+1);   
            ans[i][0] = ans[i][i] = 1;
            for(int j=1; j<i; j++){
                 ans[i][j] = ans[i-1][j-1]+ans[i-1][j];
            }
        }
        return ans;
}

int main()
{
    int n;
    cin >> n;
    vector<vector<int>> ans = pascalTriangle(n);
    for(int i=0; i<ans.size(); i++){
        for(int j=0; j<ans[i].size(); j++){
            cout << ans[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}