// Problem Link
// https://www.codechef.com/problems/MODEFREQ


#include <iostream>
#include <algorithm>
#include <map>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    int arr[n];
	    map<int, int> mp1, mp2;
	    for(int i = 0;i < n;i++){
	        cin >> arr[i];
	        mp1[arr[i]]++;
	    }
	    
	    int max_freq = 0, res = 0;
	    
	    for(auto i : mp1){
	        mp2[i.second]++;
	    }
	    
	    for(auto i : mp2){
	        if(i.second > max_freq){
	            res = i.first;
	            max_freq = i.second;
	        }
	    }
	    cout << res << endl;
	}
	return 0;
}
