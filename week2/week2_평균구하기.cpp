#include <iostream>
using namespace std;
int main()
{
    int N = 0;
    double new_average=0.0;
    int A[1000];
    cin >> N;
    
    int max=-1;
    int sum=0;

    for (int i=0;i<N;i++){
        //이렇게 입력받으면서 처리하는걸 on the fly 방식이라고 한다.
        cin >> A[i];
        if(max<A[i]){
            max=A[i];
        }
        sum+=A[i];
    }

    new_average=sum*100.0/max/3;

    cout<<"세준이의 새로운 평균:"<<new_average<<endl;
}