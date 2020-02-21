#include <iostream>
using namespace std;

int min(int a, int b){
    return a < b? a: b;
}

int max(int a, int b){
    return a > b? a: b;
}

int findMinRec(int A[],int n){
    if(n == 1){
        return A[0];
    }
    return min(A[n - 1], findMinRec(A, n- 1));
}

int findMaxRec(int A[],int n){
    if(n == 1){
        return A[0];
    }
    return max(A[n - 1], findMaxRec(A, n- 1));
}

int main(){

    int a[] = {4,6,1, 45, 7, 3};
    int n = sizeof(a)/sizeof(a[0]);
    int min = findMinRec(a,n);
    int max = findMaxRec(a, n);  
    cout << " Min : " << min << endl;
    cout << " Max : " << max << endl;
    return 0;
}