double Fahrenheit(double a){
    double x;
    x = (a*9/5)+32;
    return x;
}

int main(){
    int a;
    double sum;
    cin >> a;
    sum = Fahrenheit(a);
    std::cout << sum << std::endl;
}
