#include <iostream>
#include <map>

#include "node.h"
#include "trie.h"

Trie::Trie(const std::string *str) {
    Node *curr = &root;
    for (char ch : *str) {
        if (curr->children.contains(ch) == 0) {
            curr->children.insert({ch, Node(ch)});
        }
        curr = &curr->children.at(ch);
    }
    curr->isEnd = true;
}

void Trie::find_word(const std::string *str) {
    Node *curr = &root;

    for (char ch : *str) {
        if (curr->children.contains(ch) == 0) {
            break;
        }
        std::cout << curr->children.at(ch).value;
        curr = &curr->children.at(ch);
    }
    std::cout << "\n";
}
