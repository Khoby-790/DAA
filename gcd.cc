#include <iostream>
using namespace std;

int gcd(int,int);
int consectiveChecking(int, int);

int main(){

    int number = gcd(60, 24);
    cout << number << endl;
    //number = consectiveChecking(60, 24);
    return 0;
}


int gcd(int m, int n){
    return n != 0 ? gcd(n, m%n) : m;
}

int consectiveChecking(int m, int n){
    int t = m > n ? n : m;
    int remainder = 0;
    while(t > 0){
        remainder = m %t;
        if(remainder == 0){
            remainder = n / t;
            if(remainder == 0){
                return t;
            }else{
                t--;
            }
        }
    }
}
