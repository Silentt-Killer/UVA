#include <bits/stdc++.h>
using namespace std;

int main() {
    long long hashmat_army,opponent_army;
    while (scanf("%lld %lld",&hashmat_army,&opponent_army) !=EOF){
        if(opponent_army>hashmat_army){
        printf("%lld\n",opponent_army-hashmat_army);
        } else printf("%lld\n",hashmat_army-opponent_army);
    }
    return 0;
}
