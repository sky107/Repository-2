//Siddharth Kumar Yadav

#include <bits/stdc++.h>
using namespace std;


class Node{
public:
  char data;
  unordered_map<char,Node*>children;
  bool end;

  Node(char d){
    data=d;
    end=false;
  }
};


class Trie{
public:
  Node* root;
  int cnt;
  Trie(){
    root=new Node('\0');
    cnt=0;
  }
  void insert(char *w){
    Node* temp=root;
    for(int i=0;w[i]!='\0';i++){
      char ch=w[i];
      if(temp->children.count(ch)){
        temp=temp->children[ch];
      }else{
        Node* n=new Node(ch);
        temp->children[ch]=n;
        temp=n;
      }
    }
    temp->end=true;
  }

  bool find(char *w){
    Node* temp=root;
    for(int i=0;w[i]!='\0';i++){
      char ch=w[i];
      if(temp->children.count(ch)==0){
        return false;
      }else{
        temp=temp->children[ch];
      }
    }
    return temp->end;
  }
};

signed main(){
Trie t;
char words[][10]={"a","hello","rot","news","apples"};
char w[10];
cin>>w;

for(int i=0;i<5;i++){
  t.insert(words[i]);
}

if(t.find(w)){
  cout<<"Present\n";
}else{
  cout<<"Absent\n";
}

}











// #include <bits/stdc++.h>
// using namespace std;

// class Node{
// public:
//   char data;
//   unordered_map<char,Node*>children;
//   bool end;

//   Node(char d){
//     data=d;
//     end=false;
//   }
// };

// class Trie{
// public:
//   Node* root;
//   int cnt;
//   Trie(){
//     root=new Node('\0');
//     cnt=0;
//   }

//   void insert(char *w){
//     Node* temp=root;
//     //start with the root node

//     for(int i=0;w[i];i++){
//       char ch=w[i];
//       //counting in hashmap 
//       if(temp->children.count(ch)){
//         temp=temp->children[ch];
//       }
//       else{
//         Node* n=new Node(ch);
//         temp->children[ch]=n;
//         temp=n;
//       }

//     }
//     temp->end=true;
//   }

//   bool find(char* w){
//     Node* temp=root;
//     for(int i=0;w[i];i++){
//       char ch=w[i];
//       if(temp->children.count(ch)==0){
//         return false;
//       }else{
//         temp=temp->children[ch];
//       }
//     }
//     //terminal or not
//     return temp->end;
//   }
// };


// signed main(){
//   Trie t;
//   char words[][10]={"a","sdfsd","fdsf","sdfsd","xcv"};
//   char w[10];
//   cin>>w;
//   for(int i=0;i<5;i++){
//     t.insert(words[i]);
//   }
//   if(t.find(w)){
//     cout<<"Present\n";
//   }else{
//     cout<<"Absent\n";
//   }
// }
