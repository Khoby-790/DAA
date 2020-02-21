#include <iostream>
using namespace std;

int numberOFInputs = 0;
int *ComparisonCountingSort(int array[], int size);
int *list;

int main(){

    cout << "Enter size of list :";
    cin >> numberOFInputs;
    int Count[numberOFInputs];
    list = new int[numberOFInputs];

   // collect the data
    int i = 0;
    for(i = 0; i < numberOFInputs; i++){
        cout << "Enter ( " << i + 1 << " ) :"; 
        cin >> list[i];
    }
    list = ComparisonCountingSort(list, numberOFInputs);
    cout << list[0] << endl;
//    for(int i = 0; i < numberOFInputs; i++){
//        cout << "( " << i + 1 << " ) == " << list[i] << endl;  
//    }

    return 0;
}


int *ComparisonCountingSort(int *array, int size){
    int Count[size];
    int *S[size];
    for(int i = 0; i < size; i++){
        Count[i] = 0;
    }
    for(int i = 0; i < size - 1; i++){
        for(int j = i + 1; i < size; j++){
            if(array[i] < array[j]){
                Count[j] = Count[j] + 1;
            }else {
                Count[i] = Count[i] + 1;
            }
        }
    }
    for(int i = 0; i < size; i++){
        *S[Count[i]] = array[i];
    }
    return *S;
}