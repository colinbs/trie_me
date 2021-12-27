#include <iostream>
#include <map>

#include "node.cpp"

class Trie {
    public:
        Node root {'0'};

        Trie(const std::string str) {
            Node *curr = &root;
            for (char ch : str) {
                if (curr->children.contains(ch) == 0) {
                    curr->children.insert({ch, Node(ch)});
                }
                curr = &curr->children.at(ch);
            }
            curr->isEnd = true;
        }

        void find_word(const std::string str) {
            Node *curr = &root;

            for (char ch : str) {
                if (curr->children.contains(ch) == 0) {
                    break;
                }
                std::cout << curr->children.at(ch).value;
                curr = &curr->children.at(ch);
            }
            std::cout << "\n";
        }
};
