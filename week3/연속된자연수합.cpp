#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N;
    cin >> N;
    int count = 1; // 경우의 수(=우리가 원하는 결과) 본인 자신을 미리 카운트
    int start_index = 1;
    int end_index = 1;
    int sum = 1;
    while (end_index != N) {
        if(sum<N){
            end_index+=1;
            sum+=end_index;
        }else if(sum>N){
            sum-=start_index;
            start_index+=1;
        }else{
            count+=1;
            end_index+=1;
            sum+=end_index;
        }
    }
    cout << count << "\n";
}