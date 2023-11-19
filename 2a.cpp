#include <iostream>
#include <cmath>
#define e 2.71
using namespace std;
double f(double x){
    return (pow(x,3) - (4*x) -9); //for eq (x^3- 4x -9)
}
int main(){
    cout << "AADISH JAIN IT-C\n" << endl;
    unsigned N;
    cout << "Fix UpTo: ";
    cin >> N;
    double a=0,b=0,x,i=0;
    do{
        cout << "Enter 1st Number: ";
        cin >> a;
    }
    while (f(a) < 0);
    do{
        cout << "Enter 2nd Number: ";
        cin >> b;
    }
    while (f(b) > 0);
    while (fabs(b-a) > 0.001){
        i++;
        x = (a+b)/2;
        double y = f(x);
        cout << i << "->ITERATION: " << endl;
        cout << "\ta: " << a << endl;
        cout << "\tb: " << b << endl;
        cout << "\tAPPROXIMATE ROOT: " << x << endl;
        cout << "\tf(" << x << ") " << y << endl;
        y>0 ? (a=x) : (b=x);
        int n= y * pow(10,N);
        if (n == 0){
            break;
        }
    }
    cout << "APPROXIMATE ROOT OF EQUATION: " << x;
    return 0;
}