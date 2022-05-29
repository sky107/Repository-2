// #include <iostream>
// #include <map>
// using namespace std;

// class node{
// public:
//   char data;
//   map<char,node*>children;
//   bool end;
//   node(char d){
//     data=d;
//     end=false;
//   }
// };

// // class node{
// // public:
// //   char d;
// //   map<char,node*>child;
// //   bool e;
// //   node(char d){
// //     d(d),e(false):
// //   }
// // };

// class trie{
// public:
//   node* root;
//   int cnt;
//   trie(){
//     root=new node('\0');
//     cnt=0;
//   }

// //             ['/0'] cnt=0
// //      [{'a',false}] [{x,false}]

// // [{'a',false}] [{'b',false}]
// //
//   void ins(char *w){
//     node* temp=root;
//     for(int i=0;w[i];i++){
//       char ch=w[i];
//       if(temp->children.count(ch)){
//         temp=temp->children[ch];
//       }else{
//         node* n=new node(ch);
//         temp->children[ch]=n;
//         temp=n;
//       }
//     }
//     temp->end=true;
//   }

//   bool find(char *w){
//     node* temp=root;
//     for(int i=0;w[i];i++){
//       char ch=w[i];
//       if(temp->children.count(ch)==0){
//         return false;
//       }else
//       temp=temp->children[ch];
//     }
//     return temp->end;
//   }

// };

// signed main(){
//   trie t;
//   for(int i=0;i<5;i++){
//     t.ins("OK");
//   }

//   if(t.find("OK")){
//     cout<<"Present\n";
//   }else
//   cout<<"Absent\n";

// }
