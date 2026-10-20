#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
    stack<string> history;

    // Add visited pages
    history.push("google.com");
    history.push("youtube.com");
    history.push("abcsc.com");
    history.push("facebook.com");

    cout << "Browser History:" << endl;
    stack<string> temp = history;

    while (!temp.empty()) {
        cout << temp.top() << endl;
        temp.pop();
    }

    // Press Back once
    history.pop();
    cout << "\nAfter pressing Back once:" << endl;
    cout << "Current page: " << history.top() << endl;

    // Press Back twice
    history.pop();
    cout << "\nAfter pressing Back twice:" << endl;
    cout << "Current top page: " << history.top() << endl;

    return 0;
}
