//#include <iostream>
//#include <vector>
//using namespace std;
//
//vector<string> split(string input, string delimiter){
//    vector<string> ret;
//    long long pos;
//    string token = "";
//
//    while((pos=input.find(delimiter)) != string::npos){ // input에서 delimiter를 찾지 못할 때까지 반복
//        token = input.substr(0, pos); // 처음부터 pos까지 추출
//        ret.push_back(token); // 벡터에 저장
//        input.erase(0, pos + delimiter.length()); // 추출된 문자열 + token 길이 삭제
//    }
//    ret.push_back(input);
//
//    return ret;
//}
//
//
//int main() {
//    string s = "Hello My Name is Ha!";
//    string d = " ";
//    vector<string> a = split(s, d);
//    for(string b : a) cout << b << "\n";
//    return 0;
//}


#include <iostream>
#include <vector>

using namespace std;

vector<string> split(string input, string delimiter){
    vector<string> ret;
    string token = "";
    int pos;

    while((pos = input.find(delimiter)) != string::npos){
        token = input.substr(0, pos);
        ret.push_back(token);
        input.erase(0, pos + delimiter.length());
    }

    return ret;
}

int main() {
    string a = "Hello My Name Is Ha";
    string b = " ";
    vector<string> c = split(a,b);
    for(string d : c) cout << d << "\n";
    return 0;
}