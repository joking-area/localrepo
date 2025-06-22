#include<iostream>
using namespace std;
void f(int a) {
    cout << "the value is " << a << endl;
}
int main() {
    int a;
    cin >> a;
    f(a);
    
    return 0;
}