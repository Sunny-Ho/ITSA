#include <bits/stdc++.h>  
using namespace std;

int main(){  
    int n;  
    while(1)  {  
        //scanf("%d",&n);
        cin>>n;
        if(!n) return 0;  
        int max1 = 0, max2 = 0;  
        for(int i=0 ; i<n ; i++)  {  
            int a;// scanf("%d",&a);
            cin>>a;
            int t1,t2;  
            t1 = max2 + a;  
            t2 = max(max1,max2);  
            max1 = t1;  
            max2 = t2;  
        }  
        cout<<max(max1,max2)<<endl;  
    }  
    return 0;  
}  