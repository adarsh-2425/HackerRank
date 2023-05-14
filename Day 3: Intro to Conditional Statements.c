//Problem link: 
//https://www.hackerrank.com/challenges/30-conditional-statements/problem?isFullScreen=true

int main()
{
    int N = parse_int(ltrim(rtrim(readline())));
    
    //N % 2 == 1 checks if the number is odd
    if(N % 2 == 1 || (N % 2 == 0 && (N >= 6 && N <= 20))) {
        printf("Weird");        
    }
    else if(N % 2 == 0 && ((N >= 2 && N <= 5) || N > 20 )) {
        printf("Not Weird");        
    }
    
    return 0;
}
