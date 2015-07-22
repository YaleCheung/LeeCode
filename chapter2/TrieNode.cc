/*
 * =====================================================================================
 *
 *       Filename:  TrieNode.cc
 *
 *    Description:  Implement a trie with insert, search, and startWith methods;
 *
 *        Version:  1.0
 *        Created:  07/22/2015 05:40:45 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include <iostream>
#include <string>
using namespace std;
#define ALPHANUM 26

class TrieNode {
private:
    int count;
    bool terminal;
    TrieNode* sons[ALPHANUM];

public:
    friend class Trie;
    // Initialize your data structure here;
    TrieNode() {
        count = 0;
        for(int i = 0; i < ALPHANUM; ++ i)
            sons[i] = NULL;
        terminal = false;
    }
};

class Trie {
private:
    TrieNode* root;
public:
    Trie () {
        root = new TrieNode();
    }

    void insert(string word) {
        int length = word.size();
        if (length <= 0)
            return;

        TrieNode* p = root;
        for(int i = 0; i < length; ++ i) {
            if ((p->sons[word[i] - 'a']) == NULL) {
                p->sons[word[i] - 'a'] = new TrieNode;
                p->sons[word[i] - 'a']->count = i + 1;
            }
            p = p->sons[word[i] - 'a'];
        }
        p->sons[word[length - 1] - 'a']->terminal = true;
    }

    bool search(string word) {
        TrieNode* p = root;
        int length = word.size() - 1;
        if (length <= 0)
            return false;
        for(int i = 0; i < length; ++ i) {
            if ((p->sons[word[i] - 'a']) == NULL)
                return false;
        }
        if ((p->sons[word[length - 1] - 'a']->terminal) == true)
            return true;
        return false;
    }

    bool startsWith(string prefix) {
        TrieNode* p = root;
        int length = prefix.size() - 1;
        if (length <= 0)
            return false;
        for(int i = 0; i < length; ++ i) {
            if ((p->sons[prefix[i] - 'a']) == NULL)
                return false;
        }
        for(int i = 0; i < ALPHANUM; ++ i) {
            if ((p->sons[prefix[length - 1] - 'a'])->sons[i] != NULL)
                return true;
        }
        return false;
    }
};


