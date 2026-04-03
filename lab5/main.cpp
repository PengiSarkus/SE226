#include <iostream>
using namespace std;

double power(double base, int exp) {
    double result = 1.0;
    for (int i = 0; i < exp; ++i) {
        result *= base;
    }
    return result;
}


double globalVariableQuestion(int r,int n) {
    
    double sum = 0;
    if (n<0) return sum;
    return power(r,n) + globalVariableQuestion(r,n-1);
}

// TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
int main() {
    int n;
    cin>>n;
    cout << globalVariableQuestion(10,n);
    return 0;
}
