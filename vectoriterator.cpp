/*An iterator is an object that allows you to traverse (go through) the elements of a container (like a list, array, vector, etc.)
 one by one, without exposing the underlying structure of the container.

In simple terms:
Think of an iterator like a bookmark or a pointer that helps you move from one item to the next in a collection.
*/
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v = {1, 2, 3};
    vector<int>::iterator it;/*means:

You're declaring a variable named it.

This variable is of type vector<int>::iterator, which means:

It is an iterator that can move through a vector<int>.

It behaves like a pointer to elements inside the vector.

Breaking it down:
vector<int>: A vector that holds int values.

vector<int>::iterator: A special type defined by the vector to iterate over its elements.

it: The iterator variable you're declaring.
    */

    for (it = v.begin(); it != v.end(); ++it) { //++it is used — and it's preferred over it++ in C++ when using iterators as it++ makes copy of itself 
        cout << *it << " ";//dereferencing
    }
    return 0;
}
//auto it = vector<int>::iterator it 
