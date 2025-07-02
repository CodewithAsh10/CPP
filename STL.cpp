// STL Map

#include <map>
#include <iostream>
using namespace std;

int main() {
    map<string,int> ageMap;
    ageMap["Alice"] = 30;
    ageMap["John"] = 40;
    for (const auto& pair:ageMap) {
        cout<<pair.first<<":"<<pair.second<<endl;
    }
    return 0;
}   


// STL Vector

#include <vector>
#include <iostream>
using namespace std;

int main() {
    vector<int> numbers = {10,20,30};
    numbers.push_back(40);

    for (int num:numbers) {
        cout<<num<<" ";
    }
    return 0;
}


// STL List

#include <list>
#include <iostream>
using namespace std;

int main() {
    list<int> lst = {10,20,30};
    lst.push_front(5);
    lst.push_back(40);
    for (int i:lst) {
        cout<<i<<" ";
    }
    return 0;
}


// STL Stack 

#include <stack>
#include <iostream>
using namespace std;

int main() {
    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);

    cout<<"Top element: "<<s.top()<<endl;
    s.pop();
    cout<<"Top element after pop: "<<s.top()<<endl;
}
