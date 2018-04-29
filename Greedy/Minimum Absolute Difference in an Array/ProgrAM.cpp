#include <bits/stdc++.h>

using namespace std;


int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++){
       cin >> a[i];
    }
    sort(a.begin(),a.end());
    int min=abs(a[1]-a[0]);
    for(int i = 2; i < n; i++)
        if(abs(a[i]-a[i-1])<min)
            min=abs(a[i]-a[i-1]);
    cout << min << endl;
    return 0;
}

