#include <bits/stdc++.h>
using namespace std;

void backtrack(vector<vector<int>> mat,int x, int y,int& result, int sum) {
    if (x == mat.size()-1 && y == mat[0].size() - 1) {
        result=min(result,sum);
        return;
    }
    if (mat.size() > x+1) {
        sum+=mat[x+1][y];
        backtrack(mat,x + 1, y,result,sum);
    }
    if (mat[0].size() > y+1) {
        sum+=mat[x][y+1];
        backtrack(mat,x, y+1,result,sum);
    }
}

int printPaths(vector<vector<int>> mat) {
    int result=INT_MAX;
    int path=mat[0][0];
    backtrack(mat,0, 0,result,path);
    return result;
}

int main(){
    vector<vector<int>> mat={{-3,-2,1},
                            {-5,30,-1},
                            {60,-3,-5}
};

int ans=printPaths(mat);
cout<<ans<<endl;
    return 0;
}