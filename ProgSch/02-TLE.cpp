#include <vector>
#include <iostream>
using namespace std;

bool solution(vector<int> arr)
{
    bool answer = true;

    for(int i = 1; i < arr.size() + 1; ++i){
        int numOccured = 0;
        
        for(int j = 1; j < arr.size() + 1; ++j){
            if(i==arr.at(j - 1)) numOccured++;
            if (arr.at(j - 1) > arr.size()) return false;
        }
        if(numOccured != 1) return false;
    }

    return answer;
}