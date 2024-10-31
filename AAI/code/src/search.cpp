#include "search.h"
using std::vector;

vector<Node*> bfs(Node* start, Node* goal){
    vector<Node*> path;
    if(start == goal){
        path.push_back(start);
        return path;
    }
    std::queue<Node*> q;
    q.push(start);
    while(!q.empty()){
        Node* current = q.front();
        q.pop();
        for(Node* neighbor : current->neighbors){
            if(neighbor == goal){
                path.push_back(neighbor);
                return path;
            }
            q.push(neighbor);
        }
    }
    return path;
}

vector<Node*> dfs(Node* start, Node* goal){
    vector<Node*> path;
    if(start == goal){
        path.push_back(start);
        return path;
    }
    std::stack<Node*> s;
    s.push(start);
    while(!s.empty()){
        Node* current = s.top();
        s.pop();
        for(Node* neighbor : current->neighbors){
            if(neighbor == goal){
                path.push_back(neighbor);
                return path;
            }
            s.push(neighbor);
        }
    }
    return path;
};

vector<Node *> trace(Node *start, Node *goal) {
    vector<Node*> path;
    if(start == goal){
        path.push_back(start);
        return path;
    }
    std::stack<Node*> s;
    s.push(start);
    while(!s.empty()){
        Node* current = s.top();
        s.pop();
        for(Node* neighbor : current->neighbors){
            if(neighbor == goal){
                path.push_back(neighbor);
                return path;
            }
            s.push(neighbor);
        }
    }
    return path;
};