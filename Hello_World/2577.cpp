#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main() {

    int a, b, c;
    cin >> a >> b >> c;

    int mul = a*b*c;
    // 17037300
    // 17037300 % 10 => 0
    // 1703730 % 10 => 0
    // 170373 % 10 => 3
    // 문제의 해결방법 1
    int ans[10];

    for (int i = 0; i < 10; ++i) {
        ans[i] = 0;
    }

    while ( true ) {
        int rest = mul % 10;
        ans[rest]++;
        mul = mul / 10;
        if (mul == 0)
            break;
    }
    for (int i = 0; i < 10; ++i) {
        cout << ans[i] << endl;
    }

//    string strMul = to_string(mul);
    // "17037300" // '1'
    // char 형 설명 // 0~255 'a' = 97
//    for (int num = 0; num < 10; ++num) {
//        int c = 0;
//        for (int strIndex = 0; strIndex < strMul.length(); ++strIndex) {
//            //if ('0' + num == strMul[strIndex])
//            if (48+num == strMul[strIndex])
//                c++;
//        }
//        cout << c << endl;
//    }

    return 0;
}
