#pragma once
#include <vector>
struct Node{
    int x, y;
    int cost;
    std::vector<Node *> neighbors;
};

class Search{
public:
    vector<Node *> bfs(Node *start, Node *end);
    vector<Node *> dfs(Node *start, Node *end);
    vector<Node *> trace(Node *start, Node *end);
    vector<Node *> limited_dfs(Node *start, Node *end, int limit);
    vector<Node *> ieradant_searches(Node *start, Node *end);
    vector<Node *> consistent_search(Node *start, Node *end);
};  