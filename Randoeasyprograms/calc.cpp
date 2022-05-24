#include<iostream>

using namespace std;

int main()
{
    int x;
    cout<<"What would you like to do?\n 1: Multiply \n 2: Divide \n 3: Add \n 4: Divide";
    cin>> x;
    if(x == 1){
        cout<< "Pick two number to do the opperation";
        int num1;
        int num2;
        cin >> num1;
        cout << "Number 2"
        cin>>num2;
        cout << num1 * num2;
    }
    else if (x==2){
        cout<< "Pick two number to do the opperation";
        int num1;
        int num2;
        cin >> num1;
        cout << "Number 2"
        cin >> num2;
        cout << num1/num2;
    }
    else if (x==3){
        cout<< "Pick two number to do the opperation";
        int num1;
        int num2;
        cin >> num1;
        cout << "Number 2"
        cin >> num2;
        cout << num1 +num2;
    }
    else if (x==4){
        cout<< "Pick two number to do the opperation";
        int num1;
        int num2;
        cin >> num1;
        cout << "Number 2"
        cin >> num2;
        cout << num1 - num2;
    }
    else{
        cout<<"Invalid Charcter";
    }
    return 0;
}
