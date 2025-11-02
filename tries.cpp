#include <iostream>
using namespace std;

class TrieNode
{
public:
    TrieNode *children[26];
    bool isEnd;

    TrieNode()
    {
        isEnd = false;
        for (int i = 0; i < 26; i++)
        {
            children[i] = NULL;
        }
    }
};

class Trie
{
    TrieNode *root;

public:
    Trie()
    {
        root = new TrieNode();
    }

    void insert(string word)
    {
        TrieNode *node = root;
        for (char c : word)
        {
            int index = c - 'a';
            if (node->children[index] == NULL)
            {
                node->children[index] = new TrieNode();
            }
            node = node->children[index];
        }
        node->isEnd = true;
    }

    bool search(string word)
    {
        TrieNode *node = root;
        for (char c : word)
        {
            int index = c - 'a';
            if (node->children[index] == NULL)
                return false;
            node = node->children[index];
        }
        return node->isEnd;
    }

    bool isempty(TrieNode *node)
    {
        for (int i = 0; i < 26; i++)
        {
            if (node->children[i])
                return false;
        }
        return true;
    }

    bool Delete(TrieNode *node, string word, int depth)
    {
        if (!node)
            return false;

        if (depth == word.size())
        {
            if (!node->isEnd)
                return false; // word not present
            node->isEnd = false;

            return isempty(node); // delete node if no children
        }

        int index = word[depth] - 'a';
        if (!node->children[index])
            return false; // word not present

        bool shouldDeleteChild = Delete(node->children[index], word, depth + 1);

        if (shouldDeleteChild)
        {
            delete node->children[index];
            node->children[index] = NULL;

            return isempty(node) && !node->isEnd;
        }
        return false;
    }

    void remove(string word)
    {
        Delete(root, word, 0);
    }
};

int main()
{
    Trie *tree = new Trie();
    tree->insert("apple");
    tree->insert("appex");
    tree->insert("almond");

    tree->remove("apple");

    cout << tree->search("apple") << endl;  // 0 (deleted)
    cout << tree->search("appex") << endl;  // 1
    cout << tree->search("almond") << endl; // 1
    cout << tree->search("app") << endl;    // 0

    return 0;
}
