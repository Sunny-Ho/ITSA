//三角形

#include <bits/stdc++.h>
using namespace std;
int n;
vector <int> a;

void check(){
    for(int i = 0 ; i< n;i++)
        for(int j = i+1 ; j< n;j++)
            for(int k = j+1 ; k< n;k++){
                if((a[i]+a[j]) > a[k]) printf("%d %d %d\n",a[i],a[j],a[k]);
            }
}
int main(){
    scanf("%d",&n);
    for(int i =0; i <n;i++){
        int x; 
		scanf("%d",&x); a.push_back(x);
    }
    sort(a.begin(),a.end());
    check();
    return 0;
}