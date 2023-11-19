#include <iostream>
#include <cmath>
using namespace std;
double f(double x){
    return (pow(x,3) - 3*x -5);
}
int main(){
    cout << "AADISH JAIN IT-C\n" << endl;
    int i=0;
    double a,b,m,n,E;
    cout << "Tolerance: ";
    cin >> E;
    do{
        cout << "Initial Guess for positive output: ";
        cin >> a;
    }
    while (f(a) < 0);
    do{
        cout << " Initial guess for negative count: ";
        cin >> b;
    }
    while (f(b) > 0);
    while (fabs(a-b) > E){
        double temp = a;
        m=f(a);
        n=f(b);
        if (fabs(m-n) == 0){
            cout << endl << "TERMINATES: DENOMINATOR = 0";
            return 0;
        }
        cout << endl << "ITERATION " << ++i << " :" << endl;
        cout << "\tx" << (i-1) << " : " << b << endl;
        cout << "\tx" << (i) << " : " << a << endl;
        a=(a*n - b*m)/(n-m);
        cout << "APPROXIMATE ROOT X" << (i+1) << " : " << a << endl;
        cout << "f(" << a << "): " << f(a) << endl;
        b=temp;
    }
    cout << "\nROOT: " << a << endl;
}