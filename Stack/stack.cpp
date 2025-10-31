#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<int> s;

    // Push elements
    s.push(5);
    s.push(10);
    s.push(15);

    cout << "Top element: " << s.top() << endl;

    // Pop elements
    s.pop();
    cout << "After pop, top element: " << s.top() << endl;

    // Check size
    cout << "Stack size: " << s.size() << endl;

    // Empty the stack
    while (!s.empty()) {
        cout << "Popping " << s.top() << endl;
        s.pop();
    }

    return 0;
}
