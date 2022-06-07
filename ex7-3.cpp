int Time(int a){
    int x, y;
    x = a/60;
    return x;
}

int main(){
    int a;
    int sum1, sum2;
    cin >> a;
    sum1 = Time(a);
    sum2 = a-sum1*60;
    std::cout << sum1 << "hour" << std::endl;
    std::cout << sum2 << "min" << std::endl;
}