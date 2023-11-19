#include <iostream>
using namespace std;
int main() {
    cout << "AADISH JAIN IT-C\n" << endl;
    int n;
    cout<<"Enter no. of data points: \n";
    cin>>n;
    double x[n], y[n];
    cout<<"Enter data points (x,y) : \n";
    for(int i = 0; i<n; i++){
        cout<<"x["<<i<<"] = ";
        cin>>x[i];
        cout<<"y["<<i<<"] = ";
        cin>>y[i];
    }
    double x_val;
    cout<<"\nEnter value of x at which you want interpolation = ";
    cin>>x_val;
    double result = 0;
   
    double f[n][n];
    for(int i = 0; i<n; i++){
        f[i][0] = y[i];
    }
    for(int j = 1; j<n; j++){
        for(int i = 0; i<n-j; i++){
            f[i][j] = (f[i+1][j-1]-f[i][j-1])/(x[i+j]-x[i]);
        }
    }
    for(int j = 0; j<n; j++){
        double term = f[0][j];
        for(int i = 0; i<j; i++){
            term*=(x_val-x[i]);
        }
        result+=term;
    }
    double iv = result;
    cout<<"Interpolated value at x = "<<x_val<<" is "<<iv<<"\n";
    return 0;   
}