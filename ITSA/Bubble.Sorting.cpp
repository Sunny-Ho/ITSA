#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector <int> a;
    for(int i = 0 ; i < n; i++){
        int x;
        cin>>x; a.push_back(x);
    }
    sort(a.begin(),a.end());
    for(int i = n-1; i >=0;i--){
        cout<<n-i<<" "<<a[i]<<endl;
    }
    return 0;
}