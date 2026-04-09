#include<iostream>

using namespace std;

int main()
{
    string a, c;
    int b, d;

    cout << "이름을 입력하세요: ";
    cin >> a;

    cout << "학번을 입력하세요: ";
    cin >> b;

    cout << "학과를 입력하세요: ";
    cin >> c;

    cout << "학년를 입력하세요: ";
    cin >> d;

    cout << "이름: " << a << "\n";
    cout << "학번: " << b << "\n";
    cout << "학과: " << c << "\n";
    cout << "학년: " << d << "\n";
    return 0;
}