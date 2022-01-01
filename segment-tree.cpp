/*
Coded by Siddharth Kumar Yadav
Email: siddharthsk101@gmail.com
*/

#include <bits/stdc++.h>

using namespace std;

void build(int *a ,int s,int e,int *tree,int index){ //O(n)

if(s==e){
  tree[index]=a[s];
  return ;
}
int mid=(s+e)>>1;
build(a,s,mid,tree,2*index);
build(a,mid+1,e,tree,2*index+1);
tree[index]=min(tree[2*index],tree[2*index+1]);
return;
}


int query(int *tree ,int ss,int se,int qs,int qe,int index){ //Log(n) as height of log(n);
    //overlaping : -> partially or completely
    
    if(ss>=qs and se<=qe){
        return tree[index];
    }
    //no overlapping
    
    if(qe<ss or qs>se){
        return INT_MAX;
    }
    int mid=(ss+se)>>1;
    int left=query(tree,ss,mid,qs,qe,2*index);
    int right=query(tree,mid+1,se,qs,qe,2*index+1);
    return min(left,right);
    
}


void update(int *tree,int ss,int se,int i,int increment,int index /* index of tree*/){ //Log(n)
  //case where i is out of bound of ss & se
  if(i>se or i<ss) return ;

  if(ss=se){
    tree[index]+=increment;
    return ;
  }
  int mid=(ss+se)>>1;
  update(tree,ss,mid,i,increment,2*index);
  update(tree,mid+1,se,i,increment,2*index+1);
  tree[index]=min(tree[2*index],tree[2*index+1]);
}

void updateRange(int *tree ,int ss,int se,int l,int r,int inc,int index){
    //out of bound check first;
    if(l>se or r<ss){
        return ;
    }
    
    //leaf node
    if(ss==se){
        tree[index]+=inc;
        return ;
    }
    //reucurive case
    int mid=(ss+se)>>1;
    updateRange(tree,ss,mid,l,r,inc,2*index);
    updateRange(tree,mid+1,se,l,r,inc,2*index+1);
    tree[index]=min(tree[2*index],tree[2*index+1]);
    return ;
}



signed main(){
  int a[]={1,3,2,-5,6,4};
  int n=sizeof(a)/sizeof(int);

  int *tree=new int[4*n+1];
  build(a,0,n-1,tree,1);
  
  update(a,0,n-1,0,+10,1); //Point update
  updateRange(tree,0,n-1,3,5,+10,1); //range update
  
  for(int i=1;i<=13;i++){
    cout<<tree[i]<<" ";
  }
  
  int q;
  cin>>q;
  while(q--){
      int l,r;
      cin>>l>>r;
      cout<<query(tree,0,n-1,l,r,1)<<endl;
  }

  return 0;
}


/*
1
4 4
*/

























// #include <bits/stdc++.h>

// #define int long long int

// using namespace std;

// int v[1000000], tree[5000000];

// void build(int* tree, int v[], int s, int e, int index)
// {
//     if (s == e) {
//         tree[index] = v[s];
//         return;
//     }
//     int mid = (s + e) >> 1;
//     build(tree, v, s, mid, 2 * index);
//     build(tree, v, mid + 1, e, 2 * index + 1);
//     tree[index] = min(tree[2 * index], tree[2 * index + 1]);
//     return;
// }

// int query(int* tree, int ss, int se, int qs, int qe, int index)
// {
//     if (ss >= qs and se <= qe) {
//         return tree[index];
//     }

//     if (qe < ss or qs > se) {
//         return INT_MAX;
//     }

//     int mid = (ss + se) >> 1;
//     int left = query(tree, ss, mid, qs, qe, 2 * index);
//     int right = query(tree, mid + 1, se, qs, qe, 2 * index + 1);
//     return min(left, right);
// }

// signed main()
// {
//     // ios_base::sync_with_stdio(false);
//     //  cin.tie(NULL);
//     int n, m;
//     cin >> n >> m;
//     for (int i = 0; i < n; i++)
//         cin >> v[i];

//     build(tree, v, 0, n - 1, 1);

//     while (m--) {
//         int l, r;
//         cin >> l >> r;
//         l--, r--;
//         cout << query(tree, 0, n - 1, l, r, 1) << "\n";
//     }
// }
