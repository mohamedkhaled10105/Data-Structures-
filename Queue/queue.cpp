#include <iostream>
#include <queue>
using namespace std;

int main() {
    queue<int> q;

    // Enqueue elements
    q.push(1);
    q.push(2);
    q.push(3);

    cout << "Front: " << q.front() << endl;
    cout << "Back: " << q.back() << endl;

    q.pop();
    cout << "After pop, front: " << q.front() << endl;

    cout << "Queue size: " << q.size() << endl;

    return 0;
}
