#include<bits/stdc++.h>
using namespace std;
int trap(vector<int>& height) {        
        int count=0;
        int n=height.size();
        vector<int> left(n,height[0]);
        vector<int> right(n,height[n-1]);
        for(int i=1;i<n-1;i++){
            int val=max(height[i],left[i-1]);
            left[i]=val;}
        for(int i=n-2;i>=0;i--){
            int val=max(height[i],right[i+1]);
            right[i]=val;}
        for(int i=1;i<n-1;i++){
            count=count+min(left[i],right[i])-height[i];}
        return count; 
    }

int main(){
  int n; cin>>n;
  vector<int>height(n);
  for(int i=0; i<n; i++){
    int x; cin>>x;
    height.push_back(x);
  }
  cout<<trap(height);
}
