#include<stdio.h>
int main()
{
	
	int a[]={1,4,6,8};
	int b[]={1,3,5,7};
	int c[100],i,j,k,size;
	
	
	for(i=0;i<4;i++){
	 
	 c[i]=a[i];
	 c[i+4]=b[i];
	 	
		
		
		}
	
	printf("Merged Array\n");
	
	
	for(i=0;i<8;i++){
		
		
		printf("%d\n",c[i]);
		
		
		
	}
	
	 printf (" Define the number of elements in an array: ");  
    scanf (" %d", &size);  
      
    
      
    
    for ( i = 0; i < size; i ++)  
    {  
        for ( j = i + 1; j < size; j++)  
        {  
            
            if ( c[i] == c[j])  
            {  
                
                for ( k = j; k < size - 1; k++)  
                {  
                    c[k] = c [k + 1];  
                }  
                
                size--;  
                  
            
                j--;      
            }  
        }  
        
    }
    
    
     for ( i = 0; i < size; i++)  
    {  
        printf (" %d \t", c[i]);  
    }  
    return 0;
	
}
	
