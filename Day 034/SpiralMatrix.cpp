//54
class Solution {
public:
    int x,y;
    vector<vector<int>> arr;
    vector<int> vec;

    void solve(int i,int j,int dir){
        if(arr[i][j]==-101) return;
        vec.push_back(arr[i][j]);
        cout<<arr[i][j]<<endl;
        arr[i][j]=-101;
        if(j<y && ((dir==0 && arr[i][j+1]!=-101) || (dir==3 && (i==0 || arr[i-1][j]==-101)))) solve(i,j+1,0);
        else if(i<x && ((dir==1 && arr[i+1][j]!=-101) || (dir==0 && (j==y || arr[i][j+1]==-101)))) solve(i+1,j,1);
        else if(j>0 && ((dir==2 && arr[i][j-1]!=-101) || (dir==1 && (i==x || arr[i+1][j]==-101)))) solve(i,j-1,2);
        else if(i>0 && ((dir==3 && arr[i-1][j]!=-101) || (dir==2 && (j==0 || arr[i][j-1]==-101)))) solve(i-1,j,3);
    }

    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        arr=matrix;
        x=arr.size()-1;
        y=arr[0].size()-1;
        solve(0,0,0);
        return vec;
    }
};
