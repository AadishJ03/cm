#include <bits/stdc++.h>
using namespace std;
#define e 0.001
#define max_itr 50
double f(double x){
    return (pow(x,4) - x -9);
}
double f1(double x){
    return (4*pow(x,3) -1);
}
int main(){
    cout << "AADISH JAIN IT-C\n" << endl;
    double x0,x1;
    cout << "Enter Initial Guess: ";
    cin >> x0;
    int itr=1;
    while (itr <= max_itr){
        x1 = x0 -(f(x0)/f1(x0));
        if (fabs(x1-x0) < e){
            cout << endl << "Root found at x = " << x1;
            break;
        }
        x0=x1;
        cout << "Iteration: " << itr << "x = " << x0 << ", f(x) = " << f(x0) << endl;
        itr++;
    }
    if(itr > max_itr){
        cout << "Root not found within " << max_itr << "iterations" << endl;
    }
    return 0;
}