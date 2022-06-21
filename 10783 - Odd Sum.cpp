#include <bits/stdc++.h>
using namespace std;

int main() {
    int test_case;
    scanf("%d",&test_case);
    for (int j = 1; j <= test_case; ++j) {
        int a,b,sum=0;
        scanf("%d",&a);
        scanf("%d",&b);
        for (int i = a; i <=b ; i++) {
            if(i%2!=0){
                sum=sum+i;
            }
        }
        printf("Case %d: %d\n",j,sum);
    }
    return 0;
}
