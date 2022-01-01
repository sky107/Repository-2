

class Solution {
public:
    Node* cloneGraph(Node* node) {
       if(!node){
           return NULL;
       }
      unordered_map<Node*,Node*>mp;
      Node* copy=new Node(node->val);
      mp[node]=copy;
        queue<Node*>q;
        q.push(node);

        while(!q.empty()){
            Node* t=q.front();
            q.pop();
            for(auto x:t->neighbors){
                if(!mp.count(x)){
                    mp[x]=new Node(x->val);
                    q.push(x);
                }
                mp[t]->neighbors.push_back(mp[x]);
            }
        }

        return copy;



    }
};

//https://leetcode.com/problems/clone-graph/discuss/630130/C%2B%2B-solution-with-comments