void solve(double meal_cost, int tip_percent, int tax_percent) {
    //use double instead of float because it gives a greater precision
    //multiplication before division
    double tip = (meal_cost * tip_percent) / 100;
    double tax = (tax_percent * meal_cost) / 100;
    
    double total = meal_cost + tip + tax;
    
    //typecasting to (int) to ensure that printf will print total without any trailing zeroes
    //round() used to round of to the nearest integer. it is imported from math.h. 
    int roundedTotal = (int)round(total);
    
    printf("%d", roundedTotal);
    
}
