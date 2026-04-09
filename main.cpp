#include<iostream>

using namespace std;

int main()
{
    string a, c;
    int b;

    cout << "이름을 입력하세요: ";
    cin >> a;

    cout << "학번을 입력하세요: ";
    cin >> b;

    cout << "학과를 입력하세요: ";
    cin >> c;

    cout << "이름: " << a << "\n";
    cout << "학번: " << b << "\n";
    cout << "학과: " << c << "\n";
    return 0;
}