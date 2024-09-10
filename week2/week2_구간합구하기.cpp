#include <iostream>
using namespace std;
int main()
{
    int sum=0;
    int tmp=0;
    int first=0;
    int second=0;
    int answer=0;
    ios::sync_with_stdio(false);

    cin.tie(NULL);
    cout.tie(NULL);

    int suNo, quizNo;
    //suNo 숫자 개수 quizNo 질의 개수 S 합 배열
    cin >> suNo >> quizNo;

    int S[100001] = {}; // 이 코드가 하는 일은? → 배열을 0으로 초기화

    for (int i = 0; i < suNo; i++) {
        cin >> tmp;
        sum+=tmp;
        S[i]=sum;
    }

    for (int i = 0; i < quizNo; i++) {
        cin >> first >> second;
        if(first-2<0){
            answer=S[second-1];
        }else{
            answer=S[second-1]-S[first-2];
        }
        cout<<answer<<endl;
    }
}