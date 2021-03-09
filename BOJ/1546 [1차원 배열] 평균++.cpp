#include <iostream>
#include <string>
using namespace std;

int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    
    int n,m=0,sum=0,t;
    scanf("%d",&n);
    

    for(int i=0;i<n;++i){
        scanf("%d",&t);
        if(m<t)m=t;
        sum+=t;
    }
    
    printf("%f\n",100.0*sum/m/n);
}
