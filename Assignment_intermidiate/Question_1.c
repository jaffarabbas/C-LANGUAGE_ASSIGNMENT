#include<stdio.h>


int N=5,M=5,i,j;

void work();
//int findMax();
int main(){
	work();
	return 0;
}

void work(){
	//5 *5 matrix

	int arr1[5][5]={{2,3,4,5,20},{2,3,4,5,6},{2,3,4,5,6},{2,3,4,5,6},{2,3,4,5,6}};
	
	for(i=0;i<N;i++){
		for(j=0;j<M;j++){
			printf(" %d ",arr1[i][j]);
		}
		printf("\n");
    }
    
      // Initializing max element as INT_MIN 
    int maxElement = 0; 
  
    // checking each element of matrix 
    // if it is greater than maxElement, 
    // update maxElement 
    for ( i = 0; i < N; i++) { 
        for ( j = 0; j < M; j++) { 
            if (arr1[i][j] > maxElement) { 
                maxElement = arr1[i][j]; 
            } 
        } 
    } 
  
  printf("Highest Number in 2d Matirx : %d",maxElement);
}
