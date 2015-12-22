
double power_r(double number, int degree) {
    if (degree == 0) {
        return 1;
    }
    return number * power_r(number, degree - 1);
}

