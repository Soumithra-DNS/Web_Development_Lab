#include <bits/stdc++.h>
using namespace std;
#define int long long

struct Node
{
    Node *links[26] = {nullptr};
    int cntEndWith = 0;
    int cntPrefix = 0;

    bool containsKey(char ch)
    {
        return links[ch - 'a'] != nullptr;
    }

    void put(char ch, Node *node)
    {
        links[ch - 'a'] = node;
    }

    Node *get(char ch)
    {
        return links[ch - 'a'];
    }

    void increaseEnd()
    {
        cntEndWith++;
    }

    void increasePrefix()
    {
        cntPrefix++;
    }

    void deleteEnd()
    {
        cntEndWith--;
    }

    void reducePrefix()
    {
        cntPrefix--;
    }
};

Node *root = new Node();

void deleteTrie(Node *node)
{
    for (int i = 0; i < 26; ++i)
    {
        if (node->links[i])
        {
            deleteTrie(node->links[i]);
        }
    }
    delete node;
}

void insert(const string &word)
{
    Node *node = root;
    for (char ch : word)
    {
        if (!node->containsKey(ch))
        {
            node->put(ch, new Node());
        }
        node = node->get(ch);
        node->increasePrefix();
    }
    node->increaseEnd();
}

Node *f(string &current, Node *node, string &bestWord, int &mxCnt)
{
    for (char c = 'a'; c <= 'z'; c++)
    {
        if (node->containsKey(c))
        {
            current += c;
            if (node->get(c)->cntEndWith > mxCnt)
            {
                bestWord = current;
                mxCnt = node->get(c)->cntEndWith;
            }
            return f(current, node->get(c), bestWord, mxCnt);
        }
    }
    return node;
}

void search(const string &word)
{
    Node *node = root;
    for (char ch : word)
    {
        if (!node->containsKey(ch))
        {
            cout << -1 << "\n";
            return;
        }
        node = node->get(ch);
    }
    string current = word, bestWord = word;
    int mxCnt = node->cntEndWith;
    f(current, node, bestWord, mxCnt);
    cout << bestWord << " " << mxCnt << "\n";
}

bool startsWith(const string &prefix)
{
    Node *node = root;
    for (char ch : prefix)
    {
        if (!node->containsKey(ch))
        {
            return false;
        }
        node = node->get(ch);
    }
    return true;
}

int countWordsEqualTo(const string &word)
{
    Node *node = root;
    for (char ch : word)
    {
        if (!node->containsKey(ch))
        {
            return 0;
        }
        node = node->get(ch);
    }
    return node->cntEndWith;
}

int countWordsStartingWith(const string &prefix)
{
    Node *node = root;
    for (char ch : prefix)
    {
        if (!node->containsKey(ch))
        {
            return 0;
        }
        node = node->get(ch);
    }
    return node->cntPrefix;
}

void erase(const string &word)
{
    Node *node = root;
    for (char ch : word)
    {
        if (node->containsKey(ch))
        {
            node = node->get(ch);
            node->reducePrefix();
        }
        else
        {
            return;
        }
    }
    node->deleteEnd();
}

void solve()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        insert(s);
    }
    int m;
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        string pre;
        cin >> pre;
        search(pre);
    }
}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
