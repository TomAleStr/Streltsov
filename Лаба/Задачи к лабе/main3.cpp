//3.	Даны три числа. Найти сумму двух наибольших из них. 
#include <iostream>
using namespace std;
int main() {
    int a, b, c;
    int sum = 0;
    cin >> a >> b >> c;
    sum = a + b;
    if(sum < (a + c))
        sum = a + c;
    if(sum < (b + c))
        sum = b + c;
    cout << sum;
return 0;
}