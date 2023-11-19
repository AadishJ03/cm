#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
void divider(int n){
    for(int i=0;i<n;i++)
        cout << "-";
}
int sf(double val){
    int SF=floor(log10(val))+1;
    return SF;
}
int main(){
    cout << "AADISH JAIN IT-C\n" << endl;
    int n;
    cout << "NUMBER OF ELEMENTS: ";
    cin >> n;
    double x[n],y[n];
    for(int i=0;i<n;i++){
        cout << endl << "x" << i << " : ";
        cin >> x[i];
        cout << "y" << i << " : ";
        cin >> y[i];
    }
    double xp, result=0, temp;
    cout << "POINT AT WHICH VALUE IS SUPPOSED TO BE DETERMINED: ";
    cin >> xp;
    for(int i=0;i<n;i++){
        temp=y[i];
        for(int j=0; j<n; j++){
            if (j==i)
                continue;
            temp*= (xp -x[j])/(x[i]-x[j]);
        }
        result += temp;
    }
    cout << "LAGRANGES INTERPOLATION FORMULA: " << endl;
    for(int i=0; i<n; i++){
        int m=0;
        cout << "    ";
        for(int j=0;j<n;j++){
            if(j==i)
                continue;
            m += sf(x[j]) + 3;
            cout << "(x-" << fixed << setprecision(2) << x[j] << ")";
        }
        m += (sf(x[i]) + 3)*(n-1);
        cout << endl;
        cout << ((i==0) ? "= " : "+ ");
        divider (m+3*(n-1)+2);
        cout << "*" << y[i] << endl;
        cout << "    ";
        for(int j=0; j<n;j++){
            if(j==i)
                continue;
            cout << "(" << fixed << setprecision(2) << x[i] << "-" << x[j] << ")";
        }
        cout << "\n\n";
    }
    cout << "y" << int(xp) << " => " << result;
    return 0;
}