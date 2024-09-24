#include <iostream>
#include <vector>
#include <algorithm> // sort 함수 호출을 위해
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N, M;
    cin >> N >> M;
    vector<int> A(N, 0);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    sort(A.begin(), A.end());//A.begin()= 첫 번째 데이터 위치 A.end()=마지막 데이터 다음 위치
    int count = 0;
    int i = 0;
    int j = N - 1;
    // 작성하세요.
    cout << count << "\n";
}