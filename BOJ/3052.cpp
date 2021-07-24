#include <iostream>
#include <string>
using namespace std;

int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    int arr[42],t;
    for(int i=0;i<10;++i) {
        scanf("%d",&t);
        ++arr[t%42];
    }
    for(int i=0;i<42;++i)if(arr[i])++t;
    printf("%d",t);
}
