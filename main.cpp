#include<iostream>

using namespace std;

int main()
{
    string a, c, d;
    int b, e;

    cout << "이름을 입력하세요: ";
    cin >> a;

    cout << "학번을 입력하세요: ";
    cin >> b;

    cout << "학과를 입력하세요: ";
    cin >> c;
    
    cout << "학교를 입력하세요: ";
    cin >> d;
  
    cout << "학년을 입력하세요: ";
    cin >> e;

	
    cout << "이름: " << a << "\n";
    cout << "학번: " << b << "\n";
    cout << "학과: " << c << "\n";
    cout << "학교: " << d << "\n";
    cout << "학년: " << e << "\n";
    
    return 0;
}