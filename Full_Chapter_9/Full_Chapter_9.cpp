#include <iostream>
#include <vector>
#include <deque>
#include <list>
#include <forward_list>
#include <array>
#include <string>
#include <stack>
#include <queue>

using namespace std;

int main() {

    cout << "=== C++ Primer | Chapter 9: Sequential Containers (FULL) ===\n\n";
    // 1. Initialization    
    cout << "[Initialization]\n";

    vector<int> v1;                     // empty
    vector<int> v2(5, 10);               // 5 elements = 10
    vector<int> v3 = { 1,2,3,4 };          // initializer_list
    vector<int> v4(v3);                  // copy

    cout << "v2: ";
    for (int x : v2) cout << x << " ";
    cout << "\n\n";


    // 2. assign / swap

    cout << "[assign / swap]\n";

    vector<int> a = { 1,2,3 };
    vector<int> b = { 9,9,9 };

    a.assign(4, 7);
    a.swap(b);

    cout << "a: ";
    for (int x : a) cout << x << " ";
    cout << "\n\n";


    // 3. vector growth

    cout << "[vector growth]\n";

    vector<int> vg;
    cout << "initial capacity: " << vg.capacity() << "\n";

    for (int i = 0; i < 10; ++i) {
        vg.push_back(i);
        cout << "size=" << vg.size()
            << " capacity=" << vg.capacity() << "\n";
    }

    vg.reserve(50);
    vg.shrink_to_fit();
    cout << "\n";


    // 4. resize

    cout << "[resize]\n";

    vg.resize(5);
    vg.resize(8, 99);

    for (int x : vg) cout << x << " ";
    cout << "\n\n";


    // 5. insert / erase (ranges)

    cout << "[insert / erase]\n";

    vector<int> ie = { 1,2,3,4,5 };
    ie.insert(ie.begin() + 2, 100);
    ie.erase(ie.begin(), ie.begin() + 2);

    for (int x : ie) cout << x << " ";
    cout << "\n\n";


    // 6. emplace

    cout << "[emplace]\n";

    vector<string> names;
    names.emplace_back("John");
    names.emplace(names.begin(), "Alice");

    for (const string& s : names) cout << s << " ";
    cout << "\n\n";


    // 7. iterators

    cout << "[iterators]\n";

    for (auto it = v3.begin(); it != v3.end(); ++it)
        cout << *it << " ";
    cout << "\n\n";


    // 8. const containers

    cout << "[const container]\n";

    const vector<int> cv = { 1,2,3 };
    for (auto it = cv.cbegin(); it != cv.cend(); ++it)
        cout << *it << " ";
    cout << "\n\n";


    // 9. deque

    cout << "[deque]\n";

    deque<int> d;
    d.push_front(1);
    d.push_back(2);
    d.push_back(3);

    for (int x : d) cout << x << " ";
    cout << "\n\n";


    // 10. list

    cout << "[list]\n";

    list<int> l = { 1,2,3 };
    l.push_front(0);
    l.remove(2);

    for (int x : l) cout << x << " ";
    cout << "\n\n";


    // 11. forward_list

    cout << "[forward_list]\n";

    forward_list<int> fl = { 1,2,3 };
    fl.push_front(0);
    fl.remove(2);

    for (int x : fl) cout << x << " ";
    cout << "\n\n";


    // 12. array

    cout << "[array]\n";

    array<int, 3> ar = { 7,8,9 };
    cout << "size=" << ar.size() << "\n\n";


    // 13. string extra operations
    cout << "[string operations]\n";

    string s = "Hello world";
    s.insert(6, "my ");
    s.replace(6, 3, "your");
    s.append("!");

    cout << s << "\n";
    cout << "compare: " << s.compare("Hello your world!") << "\n\n";

    // 14. Container adaptors
    stack<int> st;
    st.push(1);
    st.push(2);
    cout << "stack top: " << st.top() << "\n";

    queue<int> q;
    q.push(10);
    q.push(20);
    cout << "queue front: " << q.front() << "\n\n";
    cout << "=== END OF CHAPTER 9 ===\n";

}
