# Graphs

## Basic Terminologies:

1. Node - A node is an entity.
2. Edges - Represents some relationship between the entities.
3. Connected component - A connected component is the number of components in which there are atleast 2 egdges between the nodes.
4. Degree of a node - No of edges that are attaches to the node.
   _Note: The maximum degree of node can be N-1 but it should be a simple graph._
5. Simple Graph - The nodes should not have self loop. There shouldn't be any multiedges between two same nodes.
   _Note: The max numbers of edges in a graph is ⁿC₂._
6. Simple Cycles - A simple cycle is trail of vertices in which the first and last nodes are repeated.
_Note: How many cycles can a graph have? it is:_
```
ⁿC₃+ⁿC₄+ⁿC₅+...ⁿCₙ = 2ⁿ-1-ⁿC₂

```
## Representation of Graph:
### Adjacency Matrix
```
int G[N][N]; _where N is the numeber of nodes_

```
* We can use this as ⁿC₂ <=N² i.e all the max number of edges will be less than or equal to N² which is the size of the matrix. so we can store the relationship between the nodes using:
```
int G[i][j] = 1 if there exists a edge between the nodes.
            = 0 if there is no edge between the nodes.

```
### Adjacency List

### Edge List