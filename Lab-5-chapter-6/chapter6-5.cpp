#include <iostream>
#include <queue>
#include <vector>
using namespace std;

struct Node {
    char ch;
    int freq;
    Node *left, *right;
    Node(char c, int f) : ch(c), freq(f), left(NULL), right(NULL) {}
};

struct Compare {
    bool operator()(Node *a, Node *b) {
        return a->freq > b->freq; // Min Heap
    }
};

void printCodes(Node *root, string code) {
    if (!root)
        return;
    if (root->ch != '#')
        cout << root->ch << ": " << code << endl;
    printCodes(root->left, code + "0");
    printCodes(root->right, code + "1");
}

int main() {
    int n;
    cin >> n;

    priority_queue<Node *, vector<Node *>, Compare> pq;
    for (int i = 0; i < n; i++) {
        char ch;
        int freq;
        cin >> ch >> freq;
        pq.push(new Node(ch, freq));
    }

    while (pq.size() > 1) {
        Node *left = pq.top(); pq.pop();
        Node *right = pq.top(); pq.pop();
        Node *merged = new Node('#', left->freq + right->freq);
        merged->left = left;
        merged->right = right;
        pq.push(merged);
    }

    Node *root = pq.top();
    printCodes(root, "");

    return 0;
}