#include <stdio.h>
#include <time.h>

/**
 * @brief This is the naive Fibonacci function
 * 
 * @param n 
 * @return int 
 */
int fibonacci(int n) {
    if (n==0 || n ==1) return n;
    return fibonacci(n-1) + fibonacci (n-2);
}


unsigned long long Fibonacci_memo (unsigned int n, unsigned long long memo[]) {
    if (memo[n] != -1) {
        return memo[n];
    }

    if (n <= 1) {
        memo[n] = n;
    }
    else {
        memo[n] = Fibonacci_memo(n-1, memo) + Fibonacci_memo(n-2, memo);
    }

    return memo[n];
}

int main() {
    int n; n = 40;

    //Displays the naive Fibonacci function
    //int  time1 = clock();
    printf("With the naive Fibonacci we get :%i\n", fibonacci(n));

    //Displays the Dynamic Programming Fibonacci function
    int DP[n];
    for (int i = 0; i <= n; i++) {
        DP[i] = -1;
    }
    printf("With the DP Fibonacci we get :%i\n", Fibonacci_memo(n, DP));

    return 0;
}