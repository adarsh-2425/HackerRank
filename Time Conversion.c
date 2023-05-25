//Complete the timeConversion function in the editor below. It should return a new string representing the input time in 24 hour format.

char* timeConversion(char* s) {
    
    static char time24hour[20]; //static variable to store the  result
    int hours, minutes, seconds;
    char *token;
    char *s_copy;
    
    s_copy = strdup(s); // make a copy of the input string
    
    // extract hours, minutes, and seconds from the input string
    token = strtok(s, ":");
    hours = atoi(token);
    token = strtok(NULL, ":");
    minutes = atoi(token);
    token = strtok(NULL, " ");
    seconds = atoi(token);
    
    //afternoon
    if (hours < 12 && strstr(s_copy, "PM") != NULL) {
        hours += 12;
    }
    
    //midnight
    if (hours == 12 && strstr(s_copy, "AM") != NULL) {
        hours = 0;
    }
    
    // format the time in 24-hour format with seconds
    sprintf(time24hour, "%02d:%02d:%02d", hours, minutes, seconds);
    
    free(s_copy); // free the copy of the input string
    
    return time24hour;

}
