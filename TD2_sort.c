#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

struct sarray {
    int array[10000];
    int n;
};
typedef struct sarray* array;

int isSortedInscreasing (int n, unsigned long long A) {
    int h; int t;
    for (int i = 1; i < n; i++){
        h = A[i]; t = A[i-1];
        if (t >= h) return 0;
    return 1;
    }
}

int linearSearch(int n, int x, unsigned long long A) {
    for (int i = 0; i < n; i++) {
        if (A[i] == x) return i;
    }
    return -1;
}

int min(int a, int b) {
    if (a < b) return a;
    return b;
}

int jumpSearch (int n, int x, unsigned long long A) {
    int jump_size = (int)sqrt(n);
    int m = jump_size;
    int prev = 0;
    while (A[min(m, n) - 1] < x) {
        prev = m;
        m = m + jump_size;
        if (prev >= n) return -1;
    }
    for (int i = prev; i <=min(m, n); i++) {
        if (A[i] == x) return i;
    }
    return -1;
}

int BinarySearch (int n, int x, unsigned long long A) {
    int low = 0;
    int high = n-1;
    while (low < high) {
        int mid = (high + low) / 2;
        if (A[mid] == x) return mid;
        if (A[mid] < x) {low = mid + 1;}
        else {high = mid + 1;}
    }
    return -1;
}


void swapInt(int a, int b) {
    int c = a;
    a = b;
    b = c;
}



double startClock, endClock;
void main() {
    startClock = clock();
}