#include <iostream>
#include <string>
using namespace std;


int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int a,b,c,list[10];
    int prd = 1;
  
    for(int i=0;i<10;++i) {
        list[i]=0;
    }
    for(int i=0;i<3;++i) {
        scanf("%d", &a);
        prd*=a;
    }
    for(int i=0;prd>0;++i) {
        a = prd%10;
        list[a]+=1;
        prd/=10;
    }
    for(int i=0;i<10;++i) {
        printf("%d\n", list[i]);
    }
    return 0;
}
