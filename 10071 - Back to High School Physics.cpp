#include <bits/stdc++.h>
using namespace std;

int main() {
    int v,t;
    while (scanf("%d %d",&v,&t) != EOF){
        if(v>=-100 && v<=100){
            if(t>=0 && t<=200)   printf("%d\n",v*2*t);
        }
    }
    return 0;
}
