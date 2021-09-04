#include <iostream>
#include <algorithm>
using namespace std;

int solution(const vector<int> arr){
    sort(arr.begin(), arr.end());
    for(int i=0;i<arr.size();++i){
        if(arr.at(i) != i+1) return false;
    }
    return true;
}