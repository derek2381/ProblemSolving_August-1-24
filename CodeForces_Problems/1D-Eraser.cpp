// problem link
// https://codeforces.com/problemset/problem/1873/D

#include <bits/stdc++.h>

using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int n,k, count = 0;
        cin >> n >> k;
        string str;
        cin >> str;
        int i = 0;
        while(i < n){
            if(str[i] == 'B'){
                i += k;
                count++;
            }else{
                i++;
            }
            
        }
        
        cout << count << endl;
    }
}
