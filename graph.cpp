#include<iostream>
using namespace std;

int main(){
    int vert;
    int graph[20][20];
    char node[10];
    cout<<"how many vart do uwant"<<endl;
    cin>>vert;

    for(int i=0;i<vert;i++){
        cin>>node[i];
    }

    for(int i=0;i<vert;i++){
        for(int j=0;j<vert;j++){
            cout<<node[i]<<"between"<<node[j]<<" : ";
            cin>>graph[i][j];
        }
    }

    for(int i=0;i<vert;i++){
        for(int j=0;j<vert;j++){
            
            cout<<graph[i][j];
        }
        cout<< endl;
    }


}