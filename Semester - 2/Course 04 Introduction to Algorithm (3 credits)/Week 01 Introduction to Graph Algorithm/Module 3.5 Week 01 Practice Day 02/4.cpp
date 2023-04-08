#include<bits/stdc++.h>
using namespace std;

void Adj_mat_to_Adj_list()
{
    int nodes;
    cout << "No. of nodes: ";
    cin >> nodes;
    vector<int>a[nodes];
    cout << "Enter the matrix: \n";
    for(int i = 0; i < nodes; i++) {
        for(int j = 0; j < nodes; j++) {
            int u;
            cin >> u;
            a[i].push_back(u);
        }
    }
    cout << "\n";

    for(int i = 0; i < nodes; i++) {
        cout << i << ": ";
        for(int j = 0; j < nodes; j++) {
            if(a[i][j] == 1) {
                cout << j << " ";
            }
        }
        cout << "\n";
    }
    cout << "\n";
}
void Adj_list_to_Adj_mat()
{
    int nodes;
    cout << "No. of nodes: ";
    cin >> nodes;
    int matrix[nodes][nodes];

    for(int i = 0; i < nodes; i++) {
        for(int j = 0; j < nodes; j++) {
            matrix[i][j] = 0;
        }
    }

    for(int i = 0; i < nodes; i++) {
        int n;
        cout << "No. of neighbours of " << i << ": ";
        cin >> n;
        cout << i << " : ";
        for(int j = 0; j < n; j++) {
            int edge;
            cin >> edge;
            matrix[i][edge] = 1;
        }
    }

    cout << "The Matrix: " << "\n";
    for(int i = 0; i < nodes; i++) {
        for(int j = 0; j < nodes; j++) {
            cout << matrix[i][j] << " ";
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
        cout << "1. Adjacency Matrix to Adjacency List: " << "\n";
        cout << "2. Adjacency List to Adjacency Matrix: " << "\n";
        cout << "3. Exit" << "\n";
        do{
            cout << "Enter the number of your choice: ";
            cin >> i;
        } while(i < 1 || i > 3);

        switch(i)
        {
        case 1:
            Adj_mat_to_Adj_list();
            break;
        case 2:
            Adj_list_to_Adj_mat();
            break;
        }
    } while(i != 3);

    return 0;
}
