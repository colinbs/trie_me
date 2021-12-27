#include <cstdlib>
#include <map>
#include <string>

class Node {
    public:
        bool isEnd;
        char value;
        std::map<char, Node> children;

        explicit Node(char c) {
            value = c;
            isEnd = false;
        }
};
