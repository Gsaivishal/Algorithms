#include <bits/stdc++.h>

using namespace std;

long getWays(int n,int m, vector < long > c){
    vector < long > ways(n+1,0);
    ways[0]=1;
    for(int j=0;j<m;j++)
        for(int i=1;i<n+1;i++)
            if(i>=c[j])
                ways[i]+=ways[i-c[j]];
    return ways[n];
     
}

int main() {
    int n;
    int m;
    cin >> n >> m;
    vector<long> c(m);
    for(int c_i = 0; c_i < m; c_i++)
       cin >> c[c_i];
    cout<<getWays(n,m,c);
    return 0;
}
