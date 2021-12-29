#ifndef TRIE_H
#define TRIE_H

#include <string>
#include <map>

#include "node.h"

class Trie {
    public:
        Node root;

        explicit Trie();

        bool add_word(const std::string &str);
        bool find_word(const std::string &str);
};

#endif
