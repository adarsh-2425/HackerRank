//Problem Link : https://www.hackerrank.com/challenges/30-2d-arrays/problem?isFullScreen=true
//HourGlass Problem
//The hourglass problem is a programming challenge that involves finding the maximum sum of values in a specific pattern in a 2D array.

int max_sum(int **arr) {
    const int ROWS = 6;
    const int COlS = 6;
    
    int maxSum = - 9 * 7;
    
    for(int i = 0; i < ROWS - 2; i++) {
        for(int j = 0; j < COlS - 2; j++) {
            int sum = arr[i][j] + arr[i][j+1] + arr[i][j+2] +
                        arr[i+1][j+1] +
                        arr[i+2][j] + arr[i+2][j+1] + arr[i+2][j+2];
            if (sum > maxSum) {
                maxSum = sum;
            }
        }
    }
    return maxSum;  
}
