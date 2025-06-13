/*With array:
int arr[3] = {1, 2, 3};
// You can't add more than 3 elements without redefining the array
With vector:
vector<int> v;
v.push_back(1);
v.push_back(2);
v.push_back(3);
v.push_back(4);  // No problem! Vector resizes automatically*/
#include <iostream>
#include <vector>
#include <algorithm> // For sort, reverse, find

using namespace std;

int main() {
    // Initialize empty and pre-filled vectors
    vector<int> v1;               // Empty vector
    vector<int> v2(5, 10);        // Vector of size 5 with all elements as 10
    vector<int> v3 = {1, 2, 3, 4, 5}; // Vector initialized with list

    // Add elements to the end of v1
    v1.push_back(100);
    v1.push_back(200);

    // Access elements using index
    cout << "Element at index 1: " << v1[1] << endl;

    // Access front and back elements
    cout << "Front: " << v3.front() << ", Back: " << v3.back() << endl;

    // Insert element at specific position
    v3.insert(v3.begin() + 2, 99); // Insert 99 at index 2

    // Remove element from specific position
    v3.erase(v3.begin() + 3); // Remove element at index 3

    // Print elements of v3 using index-based loop
    cout << "v3 elements: ";
    for (int i = 0; i < v3.size(); i++)
        cout << v3[i] << " ";
    cout << endl;

    // Display size and capacity
    cout << "Size: " << v3.size() << ", Capacity: " << v3.capacity() << endl;

    // Resize the vector to 10 elements, fill new ones with -1
    v3.resize(10, -1);

    // Sort and reverse the vector
    sort(v3.begin(), v3.end());
    reverse(v3.begin(), v3.end());

    // Search for value 99 in the vector
    auto it = find(v3.begin(), v3.end(), 99);
    if (it != v3.end())
        cout << "Found 99 at index: " << distance(v3.begin(), it) << endl;

    // Clear all elements in v2
    v2.clear();
    if (v2.empty())
        cout << "v2 is empty" << endl;

    // Swap contents of v1 and v3
    v1.swap(v3);

    // Print elements of v1 after swap
    cout << "After swap, v1: ";
    for (int i = 0; i < v1.size(); i++)
        cout << v1[i] << " ";
    cout << endl;

    // Reduce capacity to fit size
    v1.shrink_to_fit();
    cout << "Capacity after shrink_to_fit: " << v1.capacity() << endl;

    return 0;
}
