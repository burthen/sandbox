
double power_i(double number, int degree) {
    double res = 1;
    int deg = 0;
    for( ; deg < degree; ++deg) {
        res *= number;
    }
    return res;
}
