#include <bits/stdc++.h>  
using namespace std;  
vector <int> v1;  
vector <int> v2;  
int main()  {  
    int t;  
    while(scanf("%d",&t))  {  
        if(!t) return 0;  
        v1.clear();  
        v2.clear();  
        for(int i=0;i<t;i++)  {  
            int x; 
			scanf("%d",&x); 
			v1.push_back(x);  
        }  
        for(int i=0;i<t;i++)  {  
            int x; 
			scanf("%d",&x); 
			v2.push_back(x);  
        }  
        sort(v1.begin(),v1.end());  
        sort(v2.begin(),v2.end());  
        int s=0,e=0,cnt=0;  
        while(s<t)  {  
            while((v1[e]>=v2[s])&&(s<t)) s++;  
            if(s==t) break;  
            cnt++;  
            e++;  
            s++;  
        }  
        cout<<cnt<<endl;  
    }  
    return 0;  
}  