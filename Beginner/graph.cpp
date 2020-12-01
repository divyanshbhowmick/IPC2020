#include <bits/stdc++.h>
using namespace std;

namespace adjacency_matrix
{
    const int N = 100;
    //We are storing N² elements, wastage of space. For storing sparse graphs its not suitable, as in
    // sparse graphs m(egdes) << ⁿC₂
    int G[N][N];
    int nodes, edges;
    void readGraph()
    {
        cin >> nodes >> edges;

        for (int i = 1; i <= edges; i++)
        {
            int node1, node2;
            cin >> node1 >> node2;
            G[node1][node2] = 1;
            G[node2][node1] = 1;
        }
    }
    vector<int> getNeighboursOfNode(int node)
    {
        vector<int> neighbours;
        //Drawback: O(nodes) instead of O(deg(node))
        for (int i = 0; i < nodes; i++)
        {
            if (G[node][i])
                neighbours.push_back(i);
        }
        return neighbours;
    }
    bool isAdjacent(int node1, int node2)
    {
        if (G[node1][node2])
            return true;
        return false;
    }

} // namespace adjacency_matrix
namespace adjacency_list
{
    int N = 1e5 + 10;
    int M = 1e6 + 10;
    vector<int> G[N];
    int nodes, edges;

    void readGraph()
    {
        cin >> nodes >> edges;
        for (int i = 1; i <= edges; i++)
        {
            int node1, node2;
            cin >> node1 >> node2;
            G[node1].push_back(node2);
            G[node2].push_back(node1);
        }
    }
    vector<int> getAllNeighbours(int node)
    {
        //O(deg(node)) time.
        return G[node];
    }

    bool isAdjacent(int node1, int node2)
    {
        for (auto x : G[node1])
            if (x == node2)
                return true;
        return false;
    }
} // namespace adjacency_list

namespace edge_list
{
    int N = 1e5 + 10;
    int M = 1e6 + 10;

    int U[M], V[M], W[M];
    vector<int> G[N];
    int nodes, edges;

    int adj(int node, int edge)
    {
        //Takes a node and edge number and returns the adjacent vertex along the edge.
        if (U[edge] == node)
            return V[edge];
        else if (V[edge] == node)
            return U[edge];
        // return U[edge] ^ V[edge] ^ node;
    }
    void readGraph()
    {
        cin >> nodes >> edges;
        for (int i = 1; i <= edges; i++)
        {
            //ordering in the same order of the input.
            cin >> U[i] >> V[i];
            G[U[i]].push_back(i);
            G[V[i]].push_back(i);
        }
    }
    vector<int> getAllNeighbours(int node)
    {
        vector<int> neighbours;
        for (auto edge : G[node])
        {
            neighbour.push_back(adj(node, edge));
        }
        return neighbours;
    }
    bool isAdjacent(int node1, int node2)
    {
        for (auto edge : G[node1])
        {
            if (adj(node1, edge) == node2)
                return true;
        }
        return false;
    }

} // namespace edge_list

int main()
{
    adjacency_matrix::readGraph();
    return 0;
}
