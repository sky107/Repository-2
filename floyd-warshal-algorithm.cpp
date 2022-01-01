//The floyd warshall algorithm is for solving the all pairs shortest path probelm
//The problem is to find the shortest distances between every pair of vertices in a given edge weighted directed graph
// -ve edges also included , DPBASED => O(N3) time , V verices
#include <bits/stdc++.h>
using namespace std;

void floyd_warshall(int graph[6][6]){
	int dist[6][6];

	for(int i=0;i<6;i++){
		for(int j=0;j<6;j++){
			dist[i][j]=graph[i][j];
		}
	}

	for(int k=0;k<6;k++){ //loop for no. of verices as that many vertices
		for(int i=0;i<6;i++){
			for(int j=0;j<6;j++){
				if(dist[i][k]==INT_MAX or dist[k][j]==INT_MAX){
					continue;
				}else if(dist[i][k]+dist[k][j] < dist[i][j])
					dist[i][j]=dist[i][k]+dist[k][j];
			}
		}
	}



	for(int i=1;i<6;++i)
	{
		for(int j=0;j<6;++j)
			cout<<i<<" to "<<j<<" distance is "<<dist[i][j]<<"\n";
		cout<<"=================================\n";
	}
}




signed main(){
	int graph[6][6] = { {0, 1, 4, INT_MAX, INT_MAX, INT_MAX},
						{INT_MAX, 0, 4, 2, 7, INT_MAX},
						{INT_MAX, INT_MAX, 0, 3, 4, INT_MAX},
						{INT_MAX, INT_MAX, INT_MAX, 0, INT_MAX, 4},
						{INT_MAX, INT_MAX, INT_MAX, 3, 0, INT_MAX},
						{INT_MAX, INT_MAX, INT_MAX, INT_MAX, 5, 0} };

	floyd_warshall(graph);
	return 0;

}