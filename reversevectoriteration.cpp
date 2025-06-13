#include<iostream>
#include<vector>
using namespace std;
/*v.rbegin() → points to the last element
v.rend() → points one step before the first element
*/

int main(){
    vector<int> vec={1,2,4,5,6};
    vector<int>::reverse_iterator it;
    for(it = vec.rbegin();it!=vec.rend();++it){
        cout<< *it<<endl;

    };
    cout<<endl;
    return 0;

}