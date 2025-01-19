#include <iostream>
#include <vector>

using namespace std;

vector<string> split(string input, string delimiter){
    vector<string> ret;
    int pos;
    string token = "";

    while((pos = input.find(delimiter)) != string::npos){ // delimiter 기준으로 문자열 추출
        token = input.substr(0, pos); // 처음부터 pos까지 token
        ret.push_back(token); // 추출된 token을 ret 벡터에 삽입
        input.erase(0, pos + delimiter.length()); // token + delimiter 부분 삭제
    }
    ret.push_back(input); // 마지막 단어
    return ret;
}

vector<string> splitFast(const string& input, string delimiter){
    vector<string> ret;
    auto start = 0;
    auto end = input.find(delimiter);

    cout << "start : " << start << "\n";
    cout << "end : " << end << "\n";

    while(end != string::npos){
        ret.push_back(input.substr(start, end - start));
        start = end + delimiter.size();
        end = input.find(delimiter, start);
        cout << "start2 : " << start << "\n";
        cout << "end2 : " << end << "\n";
    }

    ret.push_back(input.substr(start));
    return ret;
}

int main() {
    string a = "Hello My Name Is Jhyun";
    string b = " ";
    vector<string> c = splitFast(a,b);
    for(string d : c) cout << d << "\n";
    return 0;
}