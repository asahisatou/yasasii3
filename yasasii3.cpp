#include <iostream>
using namespace std;

void add(int& x1, int& x2, int ad);

int main()
{
    int point1;
    int point2;
    int kasan;

    cout << "２科目文の点数を入力してください。\n";
    cin >> point1 >> point2;
    cout << "加算する点数を入力してください。\n";
    cin >> kasan;
    cout << kasan << "点加算しましたので\n";

    add(point1, point2, kasan);

    cout << "科目１は" << point1 << "点となりました。\n";
    cout << "科目２は" << point2 << "点となりました。\n";

    return 0;
}

void add(int& x1, int& x2, int ad)
{
    x1 = x1 + ad;
    x2 = x2 + ad;
}