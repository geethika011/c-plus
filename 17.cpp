#include <iostream>
using namespace std;
int main() {
    int n; 
    cout << "Enter the number of terms: ";
    cin >> n;
    int a = 0, b = 1,next; 
    cout << "Fibonacci Series: ";
    for (int i = 2; i <= n; i++) {
      next=a+b;
      a=b;
      b=next;
      cout<<next;
    }
    cout<<next;
    }
