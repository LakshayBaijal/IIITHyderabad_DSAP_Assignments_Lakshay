#include<bits/stdc++.h>
using namespace std;

void solve(int i,vector<int> &temp,vector<vector<int>> &ans,int k,int n)
{
    
    if(k==0 && n==0)
    {
        ans.push_back(temp);
        return;
    }
    if(k<0 || n<0 || i > 9)
    {
        return;
    }
    temp.push_back(i);
    solve(i+1,temp,ans,k-1,n-i);
    temp.pop_back();
    
    solve(i+1,temp,ans,k,n);
    
    
}




vector<vector<int>> combinationSum3(int k, int n) {
	// Write your code here
    
    vector<vector<int>> ans;
    vector<int> temp;
    solve(1,temp,ans,k,n);
    
    return ans;
}

int main(){
  
    int k;
    int n;
    cin >> k >> n;

    vector<vector<int>> answer = combinationSum3(k, n);

    for(vector<int> vec: answer){
        for(int val: vec){
            cout << val << " ";
        }
        cout << "\n";
    }

    return 0;
}
