#include <iostream>

//return the value
int recursiveLinearSearch(int array[],int key,int arraySize){
    
    arraySize=arraySize-1;
    if(arraySize < 0){
        return -1;
    }else if(array[arraySize] == key){
        return arraySize;
    }
    else{
        return recursiveLinearSearch(array,key,arraySize);
    }
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

    std::cout << "Enter Key To Search  in List: ";
    std::cin >> key;
    std::cout << std::endl;
    
    int result;
    result=recursiveLinearSearch(ArrayList,key,arraySize);
    if(result == -1){
        
        std::cout<<"Key NOT Found in Array";
    }
    else{
        std::cout<<"Key Found in Array at index: " << result+1;
    }
    return 0;
}

