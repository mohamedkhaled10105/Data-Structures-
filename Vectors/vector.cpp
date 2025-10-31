#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> nums;

    
    nums.push_back(10);
    nums.push_back(20);
    nums.push_back(30);

    
    cout << "Vector elements: ";
    for (int n : nums)
        cout << n << " ";

    
    cout << "\nFirst element: " << nums.front();
    cout << "\nLast element: " << nums.back();

    nums.pop_back();
    cout << "\nAfter pop_back(): ";
    for (int n : nums)
        cout << n << " ";

    return 0;
}
