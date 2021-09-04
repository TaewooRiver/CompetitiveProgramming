#include <iostream>
#include <vector>
using namespace std;

int chk[100001] = {0};
bool solution(vector<int> arr);
int main(){
}

bool solution(vector<int> arr){
    int n = arr.size();
    for(int i=0;i<n;++i){
        if(arr.at(i) < 1 || arr.at(i) > n) return false;
        chk[arr.at(i)]++;
    }
    for(int i=1;i<n+1;i++){
        if(arr.at(i) != 1) return false;
    }
    return true;
}