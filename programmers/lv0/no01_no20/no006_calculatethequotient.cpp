#include <iostream>
#include <string>
#include <vector>

using namespace std;

int solution(int num1, int num2) {
    int answer = num1 / num2;
    return answer;
}

int main()
{
    int num1 = 15;
    int num2 = 2;

    cout << solution(num1, num2) << endl;

    return 0;
}