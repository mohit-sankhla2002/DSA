## There are two types of graphs based upon connectivity: - 
1. Sparse Graphs (Low Density)
2. Dense Graphs (High Density)

## Comparison Between Adjacency List and Adjacency Matrix

**The comparison will be on the following factor, the time required to: -**

- Check if there is an edge from u to v
- Find all adjacent of u 
- Add an edge 
- Remove an edge
- Add a vertex 
- Remove a vertex

| Operation | List | Matrix |
| -------- | ------- | ------- |
| Memory | Theta(V + E) | Theta(V x V) |
| Check if there is an edge from u to v | O(V) | Theta(1) |
| Find all adjacent of u  | Theta(degree(u)) | Theta(1) |
| Add an edge | Theta(1) | Theta(1) |
| Remove an edge | Theta(V) | Theta(1) |


