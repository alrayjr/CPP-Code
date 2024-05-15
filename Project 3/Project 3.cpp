//Adrian Ray
//COP4415.01
//12/8/2022

#include <bits/stdc++.h>
#define INF 0x3f3f3f3f
using namespace std;

typedef pair<int,int> iPair;

#define graph_edge pair&lt;int,int&gt;

class Graph{

	int V;

	list< pair<int, int> > *adj;
	public:
		Graph(int V);

		void addEdge(int u, int v, int w);
		void primMST();
};

Graph::Graph(int V)
{
this->V = V;
adj = new list< pair<int, int>> [V];
}

void Graph::addEdge(int u, int v, int w)
{
    adj[u].push_back(make_pair(v, w));
    adj[v].push_back(make_pair(u, w));
}
// prints shortest path from src to each other nodes
void Graph::primMST()
{

    priority_queue< iPair, vector <iPair> , greater<iPair> > pq;
 
    int src = 0; 
 
    vector<int> key(V, INF);

    vector<int> parent(V, -1);
 
    vector<bool> inMST(V, false);
 
    pq.push(make_pair(0, src));
    key[src] = 0;
 
    while (!pq.empty())
    {

        int u = pq.top().second;
        pq.pop();
         
          if(inMST[u] == true){
            continue;
        }
       
        inMST[u] = true;  
 
        list< pair<int, int> >::iterator i;
        for (i = adj[u].begin(); i != adj[u].end(); ++i)
        {

            int v = (*i).first;
            int weight = (*i).second;
 
            if (inMST[v] == false && key[v] > weight)
            {
                key[v] = weight;
                pq.push(make_pair(key[v], v));
                parent[v] = u;
            }
        }
    }
 
    // Print edges of MST
    for (int i = 1; i < V; ++i)
        printf("%d - %d\n", parent[i], i);
}




// Driver's code
int main()
{

	int V = 8;
	Graph g(V);
	                                                                                                                                                                                                           
	g.addEdge(0, 1, 5);
	g.addEdge(0, 4, 8);
	g.addEdge(1, 2, 8);
	g.addEdge(1, 7, 11);
	g.addEdge(2, 3, 7);
	g.addEdge(2, 7, 2);
	g.addEdge(3, 6, 9);
	g.addEdge(3, 5, 14);
	g.addEdge(4, 5, 10);
	g.addEdge(5, 6, 2);
	g.addEdge(6, 7, 3);

	g.primMST();

	return 0;
}
