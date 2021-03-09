#include <iostream>
#include <string>
using namespace std;

int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    
    double max,sum;
    int t;
    scanf("%d",&t);
    int arr[t];
    scanf("%d",&arr[0]);
    max=sum=arr[0];
    for(int i=1;i<t;++i) {
        scanf("%d",&arr[i]);
        if(max<arr[i]) max=arr[i];
        sum+=arr[i];
    }
    printf("%f\n",100*sum/max/t);
}
