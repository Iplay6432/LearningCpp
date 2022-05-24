#include<iostream>

using namespace std;

int main()
{
    int curguess = 1;
    int numfinds;
    cout << "What Is The Number whe are trying to find?\n";
    cin >> numfinds;
    while(numfinds != curguess){
       curguess++;
       cout << curguess<< "\n";
    
    }
    
}
