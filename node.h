#ifndef TRIE_NODE_H
#define TRIE_NODE_H

#include <map>

class Node {
    public:
        bool isEnd;
        char value;
        std::map<char, Node> children;
        
        explicit Node(char c);
};

#endif
