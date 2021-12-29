#include <iostream>
#include <map>

#include "node.h"
#include "trie.h"

Trie::Trie() : root(Node('0')) {}

bool Trie::add_word(const std::string &str) {
    Node *curr = &root;
    bool isNewEntry = false;

    for (char ch : str) {
        if (curr->children.contains(ch) == 0) {
            curr->children.insert({ch, Node(ch)});
        }
        curr = &curr->children.at(ch);
    }

    isNewEntry = !curr->isEnd;
    curr->isEnd = true;

    return isNewEntry;
}

bool Trie::find_word(const std::string &str) {
    Node *curr = &root;

    for (char ch : str) {
        if (curr->children.contains(ch) == 0) {
            return false;
        }
        curr = &curr->children.at(ch);
    }

    return curr->isEnd;
}
