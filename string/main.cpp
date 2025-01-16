//
// Created by jhha1 on 2025-01-16(016).
//
#include <iostream>

using namespace std;


int main() {
    string a = "love is";
    a += " pain!";
    a.pop_back(); // ! 제거(제일 마지막 문자)
    cout << a << " : " << a.size() << "\n";
    cout << char(* a.begin()) << "\n";
    cout << char(* (a.end() -1)) << "\n";

    a.insert(0, "test ");
    cout << a << " : " << a.size() << "\n";

    a.erase(0, 5);
    cout << a << " : " << a.size() << "\n";

    auto it = a.find("love2");
    if(it != string::npos)
        cout << "True\n";
    else
        cout << "False\n";

    cout << a.substr(5,2) << "\n";
    return 0;
}
