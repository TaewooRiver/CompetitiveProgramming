#include <iostream>
using namespace std;
int main(){
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    int C;
    scanf("%d",&C);
    for(int i=0;i<C;++i){
        int N=0;
        int scoreSum = 0;
        int numGoodStudents = 0;
        scanf("%d",&N);
        int scores[N] = {};//may be the cause of a bug. Are arrays initialized after every iteration?
        for(int j=0;j<N;++j){
            
            int personalScore = 0;
            scanf("%d",&personalScore);
            scoreSum += personalScore;
            scores[j]=personalScore;
        }
        int averageScore=scoreSum/N;
        for(int j=0;j<N;++j){
            if(scores[j]>averageScore) ++numGoodStudents;
        }
        printf("%.3f",static_cast<float>(numGoodStudents / N));
    }
    
}