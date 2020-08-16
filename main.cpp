#include <iostream>
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

int main()
{
    int n;
    while(scanf("%d ",&n)&&n)
    {
        bool b=0;
        for(int i=1;i<100;i++)
        {
            for(int j=0;j<i;j++)
            {
                if(pow(i,3)-pow(j,3)==n) {printf("%d %d\n",i,j); b=1; break;}
            }
            if(b) break;
        }
        if(!b) cout<<"No solution"<<endl;
    }
    return 0;
}
