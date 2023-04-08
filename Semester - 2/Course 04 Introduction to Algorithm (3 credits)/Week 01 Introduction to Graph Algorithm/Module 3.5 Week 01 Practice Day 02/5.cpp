#include<bits/stdc++.h>
using namespace std;

void Edge_list_to_Adj_mat()
{
    int nodes;
    cout << "No. of nodes: ";
    cin >> nodes;
    int edges;
    cout << "No. of edges: ";
    cin >> edges;

    int matrix[nodes][nodes];
    for(int i = 0; i < nodes; i++) {
        for(int j = 0; j < nodes; j++) {
            matrix[i][j] = 0;
        }
    }
    for(int i = 0; i < edges; i++) {
        int u, v;
        cin >> u >> v;
        matrix[u][v] = 1;
    }

    for(int i = 0; i < nodes; i++) {
        for(int j = 0; j < nodes; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << "\n";
    }
    cout << "\n";
}
void Edge_list_to_Adj_list()
{
    int nodes;
    cout << "No. of nodes: ";
    cin >> nodes;
    int edges;
    cout << "No. of edges: ";
    cin >> edges;

    vector <int> adj_list[nodes];

    for(int i = 0; i < edges; i++) {
        int u, v;
        cin >> u >> v;
        adj_list[u].push_back(v);
    }

    cout << "The Adjacency List: " << "\n";
    for(int i = 0; i < nodes; i++) {
        cout << i << " -> ";
        for(int j = 0; j < adj_list[i].size(); j++) {
            cout << adj_list[i][j] << " ";
        }
        cout << "\n";
    }
    cout << "\n";
}

int main()
{
    int i;
    do {
        cout << "Operations: " << "\n";
        cout << "1. Edge List to Adjacency Matrix: " << "\n";
        cout << "2. Edge List to Adjacency List: " << "\n";
        cout << "3. Exit" << "\n";
        do{
            cout << "Enter the number of your choice: ";
            cin >> i;
        } while(i < 1 || i > 3);

        switch(i)
        {
        case 1:
            Edge_list_to_Adj_mat();
            break;
        case 2:
            Edge_list_to_Adj_list();
            break;
        }
    } while(i != 3);

    return 0;
}

