int timeChange(int a, int b){
    int x;
    x = a*60+b;
    return x;
}

int main(){
    int a;
    int b;
    int sum;
    std::cout << "pls enter hour" << std::endl;
    cin >> a;
    std::cout << "pls enter min" << std::endl;
    cin >> b;
    sum = timeChange(a, b);
    std::cout << sum << std::endl;
}