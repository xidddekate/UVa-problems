/*
 * Sai Cheemalapati
 * UVA 380: Call forwarding
 *
 */
 
#include<cstdio>
#include<vector>
#include<bits/stdc++.h>
 
using namespace std;
 
int N, source, dtim, dext;
vector<int> tim[10000], duration[10000], target[10000];
// target.resize(10000); tim.resize(10000); duration.resize(10000);
 
int traverse(int n, int o, int t, int e) {
    if(n > 0 && o == e)
        return 9999;
    for(int i = 0; i < target[e].size(); i++)
        if(t >= tim[e][i] && t <= tim[e][i] + duration[e][i])
            return traverse(n + 1, o, t, target[e][i]);
    return e;
}
 
int main() {
    printf("CALL FORWARDING OUTPUT\n");
    scanf("%d", &N);
    for(int n = 1; n <= N; n++) {
        for(int i=0;;i++) {
            scanf("%d", &source);
            if(source == 0) break;
            int ti, du, ta;
            scanf("%d %d %d", &ti, &du, &ta);
            tim[i].push_back(ti);
            duration[i].push_back(du);
            target[i].push_back(ta);
        }
        printf("SYSTEM %d\n", n);
        while(scanf("%d", &dtim) && dtim != 9000 && scanf("%d", &dext)) {
            printf("AT %04d CALL TO %04d RINGS %04d\n", dtim, dext, traverse(0, dext, dtim, dext));
        }
        target->clear(); tim->clear(); duration->clear();
    }
    printf("END OF OUTPUT\n");
}