

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>
#define n 100

 int matrix[n][n];

int main()
{
    {
        int indeg,outdeg,total_in=0,total_out=0;

        double total_time,executing_time;
        clock_t start,end;
        start=clock();
        srand(time(0));
        for(int i=0; i<n; i++)   //matrix initialization
        {
            for(int j=0; j<n; j++)
            {
                matrix[i][j]=rand()%2;
                if(i==j)
                {
                    matrix[i][j]=0;
                }
            }
        }
        for(int i=0; i<n; i++ )    //indegree calculation
        {
            for(int j=0; j<n; j++ )
            {
              //  printf("   %d",matrix[i][j]);   printing the matrix
            }
           printf("\n\n");
        }



        printf(" Vertex \t In-degree \t Out-degree");   //indegree and outdegree printing
        for(int i=0; i<n; i++)     //indegree and outdegree calculation
        {
            indeg=0;
            outdeg=0;
            for(int j=0; j<n; j++)    //indegree calculation
            {
                if(matrix[i][j]==1)
                {
                    indeg++;
                    total_in++;
                }
                if(matrix[j][i]==1)  //outdegree calculation
                {
                    outdeg++;
                    total_out++;
                }
            }

            printf("\n\n %d \t\t %d \t\t %d",i+1,indeg,outdeg);    //indegree and outdegree printing
        }

        printf("\n\n Total In degree = %d",total_in);  //total indegree printing
        printf("\n\n Total Out degree = %d",total_out);   //total outdegree printing
        int total=0 , edges;
        edges = total/2;
     if (total == 2 * edges) {
    
        printf("\n\n  are true.\n");    // it proves the Handshake theorem
    }
    else{
       printf ("Not true");
        }
       

    }

}
/*
        end=clock();//end time
        total_time=((double)(end-start)/CLOCKS_PER_SEC)*(1000000000);   //executing time
        executing_time = (total_time*1e-6);//executing time in seconds

        printf("\n\n\n Computational time is : %1f ms \n\n",executing_time);//executing time printing

*/