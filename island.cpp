#include<iostream>
#include<vector>
using namespace std;
int n;
int m;
void dfs(vector<vector<char>> &grid,int i ,int j){
    if (i < 0 || i >= n || j < 0 || j >= m || grid[i][j] != '1')
    {
        return;
    }

    grid[i][j] = '$'; // mark visited

    dfs(grid, i + 1, j);
    dfs(grid, i - 1, j);
    dfs(grid, i, j + 1);
    dfs(grid, i, j - 1);
}


int island(vector<vector<char>>grid){
     n=grid.size();
     m=grid[0].size();
    int island=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(grid[i][j]=='1'){
            dfs(grid,i,j);
            island++;
        }
    }

}
return island;
}
int main(){
   
    int r;
    int c;
    cout<<"enter the row& column";
    cin>>r>>c;
    vector<vector<char>> grid(r,vector<char>(c));
    cout << "Enter grid (0/1):\n";
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j){
            cin>>grid[i][j];
        }
    }
    cout << "Number of islands = " << island(grid);

    return 0;
}