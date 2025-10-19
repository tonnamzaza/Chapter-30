#include <iostream>
#include <bitset>
#include <deque>
#include <stack>
#include <queue>
using namespace std;

int main() {

    //Bitset
    bitset<10> b("0010011010");
    cout << "Bitset original : " << b << endl;
    cout << "b[1] = " << b[1] << "\n"; // 1
    cout << "count = " << b.count() << "\n"; // 4
    cout << "size = " << b.size() << "\n"; // 10
    cout << "test(3) = " << b.test(3) << "\n"; // 1
    b.set(0);
    b.flip(1);
    b.reset(2);
    cout << "Bitset modified : " << b << "\n\n";


    //Deque
    deque<int> d = {2, 4, 6};
    d.push_front(0);
    d.push_back(8);
    cout << "Deque: ";
    for (auto x : d) cout << x << " ";
    cout << "\n\n";


    //Stack
    stack<int> s;
    s.push(3);
    s.push(2);
    s.push(5);
    cout << "Stack top: " << s.top() << "\n"; // 5
    s.pop();
    cout << "Stack top after pop: " << s.top() << "\n\n"; // 2


    //Queue
    queue<int> q;
    q.push(3);
    q.push(2);
    q.push(5);
    cout << "Queue front: " << q.front() << "\n"; // 3
    q.pop();
    cout << "Queue front after pop: " << q.front() << "\n\n"; // 2


    //Priority Queue
    priority_queue<int> pq;
    pq.push(3);
    pq.push(5);
    pq.push(7);
    pq.push(2);
    cout << "Priority Queue top: " << pq.top() << "\n"; // 7
    pq.pop();
    cout << "Top after pop: " << pq.top() << "\n";

    return 0;
}