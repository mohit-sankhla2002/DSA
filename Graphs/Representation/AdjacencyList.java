// Online Java Compiler
// Use this editor to write, compile and run your Java code online

import java.util.ArrayList;

class HelloWorld {
    static void addEdge(ArrayList<ArrayList<Integer>> adj, int u, int v) {
        adj.get(u).add(v);
        adj.get(v).add(u);
    }
    
    static void print(ArrayList<ArrayList<Integer>> adj) {
        // v is the number of vertices in the graph
        int v = adj.size();
        
        for (int i=0;i<v;i++) {
            System.out.print(i + ": ");
            
            for (int j=0;j<adj.get(i).size();j++) {
                System.out.print(adj.get(i).get(j) + " ");
            }
            System.out.print("\n");
        }
    }
    
    public static void main(String[] args) {
        int v = 5;
        ArrayList<ArrayList<Integer>> adj = new ArrayList<ArrayList<Integer>> (v);
        for (int i=0;i<v;i++) {
            adj.add(new ArrayList<Integer>());
        }
        
        addEdge(adj, 0, 1);
        addEdge(adj, 0, 2);
        addEdge(adj, 1, 2);
        addEdge(adj, 1, 3);
        print(adj);
    }
}