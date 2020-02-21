#include <iostream>

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

    int arraySize;
    std::cout << "Enter the size of the array: ";
    std::cin >> arraySize;
    std::cout << std::endl;

    //creating the array
    int ArrayList[arraySize], key;

    //take the lists
    for(int i=0; i<arraySize; i++){
        std::cout<<"Enter Element " << i+1 << " : ";
        std::cin>>ArrayList[i];
        std::cout << std::endl;
    }
    
    int min = findMinRec(ArrayList,arraySize);
    int max = findMaxRec(ArrayList, arraySize);  
    std::cout << " Min : " << min << std::endl;
    std::cout << " Max : " << max << std::endl;
    return 0;
}