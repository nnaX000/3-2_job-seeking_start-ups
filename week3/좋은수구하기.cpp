//다시보기

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);

    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    cin >> N;
    vector<int> A(N, 0);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    sort(A.begin(), A.end());  
    int count = 0;
    // 이중 반복문을 사용하여 모든 원소에 대해 탐색
    for (int k = 0; k < N; k++) {
        int find = A[k];  // 우리가 찾고자 하는 목표값
        int i = 0;
        int j = N - 1;
        
        while (i < j) {  // 두 포인터가 만나지 않을 때까지 반복
            // if (i == k) {  // i가 k와 같으면 건너뛰기
            //     i++;
            //     continue;
            // }
            // if (j == k) {  // j가 k와 같으면 건너뛰기
            //     j--;
            //     continue;
            // }

            if (A[i] + A[j] == find) {
                count++;
                break;  // 다음 k로 넘어갑니다.
            } else if(A[i] + A[j] < find) {
                i++;
            } else {
                j--;
            }
        }
    }
    cout << count << "\n";
    return 0;
}
