#include<iostream>
#include<unordered_map>
#include<list>
using namespace std;

template <typename T> // we dont have to give data type everywhere

class graph {
          
          public:
            unordered_map<T, list<T> > adj;

            void addEdge(T u, T v, bool direction){
                //direction = 0 -> undirected
                //directon = 1 -> directed

                //create an edge from u ans v
                adj[u].push_back(v);
                if(direction == 0)
                {
                    adj[v].push_back(u);
                }
     
            }

            void printAdjList()
            {
                for(auto i : adj)
                {
                    cout<< i.first << " -> ";
                    for(auto j : i.second)
                    {
                        cout<< j << ", ";
                    }
                    cout<<endl;
                }
            }

};


int main(){
    
    int n;
    cout<<"ENter the number of nodes: " << endl;
    cin>>n;

    int m;
     cout<<"ENter the number of edges: " << endl;
    cin>>m;

    graph<int> g;

    for(int i = 0; i < m; i++)
    {
        int u,v;
        cin>>u>>v;
        //creating an undirected graph:
        g.addEdge(u,v,0);
    }

    g.printAdjList();

    return 0;
}