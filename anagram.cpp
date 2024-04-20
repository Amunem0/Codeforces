#include <iostream>
#include <string>

using namespace std;

string findSmallestConcatenatedString(const string& input, const string& target) {
    string concatenated = input;
    int multiplier = 1;

    while (concatenated.find(target) == string::npos) {
        concatenated += input;
        multiplier++;
    }

    return concatenated;
}

int main() {
    string input, target;

    cout << "Enter the initial string: ";
    cin >> input;

    cout << "Enter the target string: ";
    cin >> target;

    string result = findSmallestConcatenatedString(input, target);

    cout << "The smallest concatenated string is: " << result << endl;

    return 0;
}
