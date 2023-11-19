#include <iostream>
using namespace std;

int main(){
    cout << "AADISH JAIN IT-C" << endl;
    int choice;
    double num1 , num2, num3, result;

    while (true){
        cout << "\nChoose: " << endl;
        cout << "1. Sum of Two numbers" << endl;
        cout << "2. Mid of 2 numbers " << endl;
        cout << "3. Mid of 3 numbers" << endl;
        cout << "0. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        
        if (choice == 0){
            cout << "Thank You!";
            break;
        }
        else if ( choice == 1){
            cout << "Enter 2 numbers to be added: ";
            cin >> num1 >> num2;
            result = num1 + num2;
            cout << "Sum of " << num1 << " and " << num2 << " is " << result << endl;
        }
        else if(choice ==2){
            cout << "Enter 2 numbers to get thier mid: ";
            cin >> num1 >> num2;
            result = ((num1 + num2)/2.0);
            cout << "Mid of " << num1 << " and " << num2 << " is " << result << endl;
        }
        else if(choice ==3){
            cout << "Enter 3 numbers to get thier mid: ";
            cin >> num1 >> num2 >> num3;
            result = ((num1 + num2 + num3)/3.0);
            cout << "Mid of " << num1 << ", " << num2 << " and " << num3 << " is " << result << endl;
        }
        else{
            cout << "Invalid Choice, Please Try Again! " << endl;
        }
    }
}