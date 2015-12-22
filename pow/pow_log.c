
double power_l(double number, int degree) {
    if (degree == 0) {
        return 1;
    }
    double res = 1;
    while (degree > 0) {
        
        if (degree % 2 == 1) {
            res *= number;
            degree -= 1;
        }
        else {
            number *= number;
            degree /= 2;
        }
    }
    return res;
}
