#include<iostream>
#include<unordered_map>
#include<list>

using namespace std;

class graph
{
private:
    
public:
    unordered_map<int , list<int>> adj;

    void addEdge(int u, int v, bool direction){
        // direction 1 = directed
        // direction 0 = undirected

        adj[u].push_back(v);
        if(direction == 0)
            adj[v].push_back(u);
    }

    void printAdjList(){
        for(auto i: adj){
            cout<<i.first<<" -> ";
            for(auto j : i.second){
                cout<<j<<", ";
            }
            cout<<endl;
        }
    }
};



int main(){
    int n;
    cout<<"Enter the number of Node - ";
    cin>>n;

    int m;
    cout<<"Enter the number of Edges - ";
    cin>>m;

    graph g;
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin>>u>>v;
        // creating undirected graph
        g.addEdge(u,v,0);
    }
    g.printAdjList();
    
    return 0;
}

