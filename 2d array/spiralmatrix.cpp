#include <iostream>
using namespace std;
#include<vector>
vector<int> spiralOrder(vector<vector<int>> &mat){
  int m=mat.size();
  int n=mat[0].size();
  vector<int> ans;
  int top=0,right=n,bottom=m,left=0;
  while(left < right && top<bottom){
    
    if(left<right){
    for(int j=left;j<right;j++){
      ans.push_back(mat[top][j]);
    }
    
    top++;
    }
    if(top<bottom){
    for(int j=top;j<bottom;j++){
      ans.push_back(mat[j][right-1]);
    }
    right--;
    }
    if(left<right){
    for(int j=right-1;j>=left;j--){
      ans.push_back(mat[bottom-1][j]);
    }
    bottom--;
    }
    if(top<bottom){
    for(int j=bottom-1;j>=top;j--){
      ans.push_back(mat[j][left]);
    }
    left++;
    }
  }
  
  return ans;
}

int main() {
  
    vector<vector<int> > mat = {  { 1, 2, 3, 4 },
                                  { 5, 6, 7, 8 },
                                  { 9, 10, 11, 12 },
                                  { 13, 14, 15, 16 },
                                  {17,17,17,17},
                                  {17,17,17,17},
      
    };

    vector<int> result = spiralOrder(mat);

    for (int num : result) {
        cout << num << " ";
    }
    return 0;
}
