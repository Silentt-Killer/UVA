#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,num_1,num_2,s,d;
    scanf("%d",&n);
    while (n--) {
        scanf("%d %d",&s,&d);
        if (s<d || (s+d)%2!=0 ){
            printf("impossible\n");

        } else {
            num_1=((s+d)/2);
            num_2=(s-d)/2;
            printf("%d %d\n",num_1,num_2);
        }
    }
}
