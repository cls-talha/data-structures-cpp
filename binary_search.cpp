#include <iostream>

int binary_search(int arr *,int size ,int key){

    // initializing start and end vals
    int start = 0;
    int end = size-1;

    int mid = (start - end)/2;

    while (start<end){

        if (arr[mid] == key){
            return mid;
        }

        // greater values are on the left side of array
        else if(arr[mid] > key ){
            start = mid+1;
        }

        //smaller values are on the right side of array
        else if (arr[mid] < key ){
            end = mid-1;
        }

        mid = (start-end)/2;
    }
}

int main(){

    return 0;
}