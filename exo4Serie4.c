
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
int main()
{
    //on a deux tableau T et W 
    /* le tableau T et de taille max 25 et W et taille max 16  */
    
    /* le tableu T,W on des valeur repetitive  */
    /* on veux sotoker les valeur du tableau T et W dans un tableu V de telle sort que ce dernier n'a pas de valeur redandant   */
    
    int T[25],W[16],V[41], i,j,k,n,m;
    bool exist;
    printf("donner la taille du tableau T :");
    scanf("%d",&n);
    while(n>25 || n<1){
        printf("la taille du talbeau doit etre entre 1 et 25, redoner la taille du tableau svp : ");
        scanf("%d",&n);
    }
    
     printf("donner la taille du tableau W :");
    scanf("%d",&m);
    while(n>16 || n<1){
        printf("la taille du talbeau doit etre entre 1 et 16, redoner la taille du tableau svp : ");
        scanf("%d",&m);
    }
    
    // remplisage du tableau T
    
    for(i = 0; i<n;i++){
        printf("T[%d] :",i);
        scanf("%d",&T[i]);
    }
    
    // remplisage du tableau W
    
    for(i = 0; i<m;i++){
        printf("W[%d] :",i);
        scanf("%d",&W[i]);
    }
    
    
    //affichage du tableau T
    
    // for(int i = 0 ;i<n;i++){
    //     printf("%d ",T[i]);
    // }
    
    k = 0;
    //verification si la valeur de T[i] exits dans le tableau V et remplisage dans le tableau V si elle n'exist pas
    
    for(int i = 0 ; i <n; i++){
        
        exist = false;
        for(j=0;j<k;j++){
            if(T[i] == V[j]){
                exist = true;
                j=k+1;
            }
           
        }
        if(exist == false){
                V[k] = T[i];
                k++;
            }
    }
    
    for(int i = 0 ; i<m;i++){
        exist = false;
        for(j=0;j<k;j++){
            if(W[i]==V[j]){
                exist = true;
                j=k+1;
            }
        }
        if(exist == false){
            V[k] = W[i];
            k++;
        }
    }
    
    printf("%d",k);
    
    
    for(int i = 0 ; i <k;i++){
        printf(" %d ",V[i]);
    }
    
    
    return 0;
}
