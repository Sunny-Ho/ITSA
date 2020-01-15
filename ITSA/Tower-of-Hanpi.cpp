#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    scanf("%d",&n);
    int c = 1;
    for(int i = 0;i<n;i++)
        c*=2;
    printf("%d\n",c-1);
    return 0;
}