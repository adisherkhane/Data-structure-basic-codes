 int main()
 {
     int v[7]={0};
     int a[7][7] = {{0,1,1,1,0,0,0},
                    {1,0,1,0,0,0,0},
                    {1,1,0,1,1,0,0},
                    {1,0,1,0,1,0,0},
                    {0,0,1,1,0,1,1},
                    {0,0,0,0,1,0,0},
                    {0,0,0,0,1,0,0}};
    int n;
    printf("\nenter starting point :");
    scanf("%d",&n);
    DFS(a,v,n);
 }

 void DFS(int a[7][7],int v[7],int i)
 {
     int j;
     printf("\n%d",i);
     v[i]=1;
     for(j=0;j<7;j++)
     {
         if(a[i][j]==1 && v[j]==0)
         {
             DFS(a,v,j);
         }
     }
 }

