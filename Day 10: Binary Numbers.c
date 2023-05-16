#include <stdio.h>

//function to convert number to binary and count consecutive ones
int max_consecutive_ones(int n) {
    int binary[32];
    int i = 0;
    int max = 0;
    int count = 0;
    
    //converting n to binary
    while (n > 0) {
        binary[i] = n % 2;
        n /= 2;
        i++;
    }
    
    //Traversing the array and count consecutive ones
    for(int j = i-1; j >= 0; j--) {
        if(binary[j] == 1) {
            count++;
            
            if(count > max) {
                max = count;
            }
        }
            else {
                count = 0;
            }
        }
    return max; 
}



int main()
{
    int n = parse_int(ltrim(rtrim(readline())));
    
    int max = max_consecutive_ones(n);
    
    printf("%d", max);

    return 0;
}
