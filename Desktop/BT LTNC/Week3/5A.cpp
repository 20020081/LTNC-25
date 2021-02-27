#include<iostream>
#include<stdlib.h>
#include<ctime>
using namespace std;

void bubble_sort(int arr[]);

int main(){
    int arr[30];

    srand(time(0));
    for(int i = 0; i < 30; i++){
        arr[i] = rand()%1000;
    }
    for(int i = 0; i < 30; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    bubble_sort(arr);

    return 0;
}

void bubble_sort(int arr[]){
    for(int i = 0; i < 29; i++){
        for(int j = 0; j < 30 - i - 1; j++){
            if(arr[j] > arr[j+1]){
                int t = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = t;
            }
        }
    }

    for(int i = 0; i < 30; i++){
        cout << arr[i] << " ";
    }
}
