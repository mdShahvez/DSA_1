#include<iostream>
using namespace std;

bool isSafe(int** arr,int x,int y,int n){
  if(x<n && y<n && arr[x][y]==1){
      return true;
  }
  return false;
}
bool RatinAMaze(int** arr,int x,int y,int n,int** SoluArr){
       if(x==n-1 && y==n-1){
           SoluArr[x][y]=1;
           return true;
       } 
       if(isSafe(arr,x,y,n)){
           SoluArr[x][y]=1;
           if(RatinAMaze(arr,x+1,y,n,SoluArr)){
             return true;
           }
           if(RatinAMaze(arr,x,y+1,n,SoluArr)){
               return true;
           }
           SoluArr[x][y]==0;          //backtracking
           return false;
       }
       return false;
}

int main()
{
    int n;
    cin>>n;
     
    int** arr=new int*[n];
    for(int i=0;i<n;i++){
        arr[i]=new int[n];
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }

    cout<<endl;

    int** SoluArr=new int*[n];
    for(int i=0;i<n;i++){
        SoluArr[i] = new int[n];
        for(int j=0;j<n;j++){
             SoluArr[i][j]=0;
        }
    }

    if(RatinAMaze(arr,0,0,n,SoluArr)){
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cout<<SoluArr[i][j]<<" ";
            }cout<<endl;
        }
    }
  return 0;
}