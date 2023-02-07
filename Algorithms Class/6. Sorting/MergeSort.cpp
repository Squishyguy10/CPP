#include <bits/stdc++.h>
using namespace std;

int arr3[8];

void merge(int arr1[], int arr2[], int size1, int size2) {
    int i = 0;
    int j = 0;
    int k = 0;

    while(i < size1 && j < size2) {
        if(arr1[i] < arr2[j]) {
            arr3[k] = arr1[i];
            i++;
            k++;
        }
        else {
            arr3[k] = arr2[j];
            j++;
            k++;
        }
    }

    for( ; i < size1; i++) {
        arr3[k] = arr1[i];
        k++;
    }

    for( ; j < size2; j++) {
        arr3[k] = arr2[j];
        k++;
    }
}

int mergeSort(int l, int h) {
    if(l < h) {
        int mid = (l + h)/2;
        mergeSort(l, mid);
        mergeSort(mid+1, h);
        merge2(l, mid, h);
    }
}

void merge2(int l, int mid, int h) {
    int arr1[l];
    int arr2[h];
    int k = 0;

    while(i < size1 && j < size2) {
        if(arr1[i] < arr2[j]) {
            arr3[k] = arr1[i];
            i++;
            k++;
        }
        else {
            arr3[k] = arr2[j];
            j++;
            k++;
        }
    }

    for( ; i < size1; i++) {
        arr3[k] = arr1[i];
        k++;
    }

    for( ; j < size2; j++) {
        arr3[k] = arr2[j];
        k++;
    }
}

int mergeSort(int l, int h) {
    if(l < h) {
        int mid = (l + h)/2;
        mergeSort(l, mid);
        mergeSort(mid+1, h);
        merge2(l, mid, h);
    }
}

int main() {
    int arr1[4] = {2, 8, 15, 18};
    int arr2[4] = {5, 9, 12, 17};
    int size1 = sizeof(arr1)/sizeof(arr1[0]);
    int size2 = sizeof(arr2)/sizeof(arr2[0]);

    int needSort[8] = {9, 3, 7, 5, 6, 4, 8, 2};

    merge(arr1, arr2, size1, size2);
    mergeSort(0, sizeof(needSort)/sizeof(needSort[0]));
    
    for(int i = 0; i < 8; i++) {
        cout << arr3[i] << ' ';
    }
    cout << '\n';

    return 0;
}