#include <iostream>
#include <string>
using namespace std;


int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int list[10];
    int res = 0;
    
    
    for(int i=0;i<10;++i) {
        scanf("%d", &list[i]);
        list[i]= list[i]%42;
    }
    for(int i=0;i<10;++i) {
        int cnt = 0;
        for (int j=0;j<i;j++) {
            if (list[i] == list[j]) ++cnt;
        }
        if (cnt==0) ++res;
    }
    
    printf("%d\n", res);
    
    return 0;
}
  
