#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;
int main(){
    cout << "hello world" << endl;
    vector<int> arr{1, 2, 3, 4, 5, 6, 7, 8, 9, 0, 1, 2};
    sort(arr.begin(), arr.end());
    for(int i = 0;i < arr.size(); ++i) cout << arr.at(i) << " ";
    return 0;
}