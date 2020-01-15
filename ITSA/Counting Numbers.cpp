#include <stdio.h>  
#include <bits/stdc++.h>
int main(int argc, const char * argv[]) {  
    int n,i,j,k,temp,temp1,d;  
   // scanf("%d",&n);  
    //for(i=0;i<n;i++)  
    //{  
        int a[200]={0},b[200][2]={0};  
        int count=-1;  
        for(j=0;j<100;j++)  
        {  
           // scanf("%d",&a[j]);
            cin>>a[j];
            count++;  
            if(a[j]==-999) break;  
        }  
        for(j=0;j<count;j++)  
        {  
            b[j][0]=a[j];  
            for(k=j;k<count;k++)  
            {  
                if(a[j]==a[k])  
                    b[j][1]++;  
            }  
        }  
        for(j=0;j<count;j++)  
            for(k=j;k<count;k++)  
            {  
                if(b[j][0]<b[k][0])  
                {  
                    temp=b[j][0];  
                    b[j][0]=b[k][0];  
                    b[k][0]=temp;  
                      
                    temp1=b[k][1];  
                    b[k][1]=b[j][1];  
                    b[j][1]=temp1;  
                }  
                if(b[j][0]==b[k][0])  
                {  
                    temp1=b[k][1];  
                    b[k][1]=b[j][1];  
                    b[j][1]=temp1;  
                }  
            }  
        for(j=0;j<count;j++)  
            for(k=j+1;k<count;k++)  
                if(b[j][0]==b[k][0])  
                    b[j][1] = 0;  
        for(j=0;j<count;j++)  
        {  
            if(b[j][1]!=0)  
            {
                cout<<b[j][0]<<" "<<b[j][1]<<endl;
            //printf("%d ",b[j][0]);
            //printf("%d\n",b[j][1]);
            }  
        }  
        if(i<n-1)
            cout<<endl;
        //printf("\n");  
   // }  
     
    return 0;  
}  