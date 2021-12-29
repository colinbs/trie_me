#ifndef TRIE_H
#define TRIE_H

#include <string>
#include <map>

#include "node.h"

class Trie {
    public:
        Node root {'0'};

        explicit Trie(const std::string *str);

        void find_word(const std::string *str);
};

#endif
