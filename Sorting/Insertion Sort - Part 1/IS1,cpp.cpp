#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <bitset>
#include <cstdio>
#include <vector>
#include <cstdlib>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
using namespace std;
void insertionSort(vector <int>  a,int n) {
     int v,i,j;
     v=a[n-1];  
    for(i=n-2;i>=0;i--) {
        
    	if(v>a[i]){
    		a[i+1]=v; 
             
       for(int k=0;k<n;k++)
	     cout<<a[k]<<" ";		   
    	   cout<<endl;
            break;
        }
           		
		else
           a[i+1]=a[i];
        
              
        
       for(int k=0;k<n;k++)
	     cout<<a[k]<<" ";		   
    	   cout<<endl;
	}
    if(v<a[0] ){
            a[1]=a[0];
            a[0]=v;
        for(int k=0;k<n;k++)
	     cout<<a[k]<<" ";		   
    	   cout<<endl;
                   }

}
int main(void) {
    vector <int>  _ar;
    int _ar_size;
    cin >> _ar_size;
    for(int _ar_i=0; _ar_i<_ar_size; _ar_i++) {
        int _ar_tmp;
        cin >> _ar_tmp;
        _ar.push_back(_ar_tmp); 
    }
    

    insertionSort(_ar,_ar_size);  
    return 0;
}

