#include <stdio.h>

int main()
{
    int tab[100], max=0, nbr_apparition=0, i,nbr_elem_in_table ; 
    scanf("%d",&nbr_elem_in_table);
    printf("\n");
    while(nbr_elem_in_table>100 || nbr_elem_in_table<1){
        printf("la taille du tableau doit etre entre 1 et 100\n");
        printf("donnez la taille correspandatne svp : ");
        scanf("%d",&nbr_elem_in_table);
    }
    for(i = 0 ; i<nbr_elem_in_table;i++){
        printf("Tab[%d]",i);
        scanf("%d",&tab[i]);
    }
    
    //le maximum : 
    for( i = 0 ; i<nbr_elem_in_table;i++){
        if(max<tab[i]){
            max=tab[i];
        }
    }
    
    printf("le maximum est : %d \n",max);
    //nbr apparition du maximum 
    for(int i = 0;i<nbr_elem_in_table;i++){
        if(tab[i] == max){
            nbr_apparition = nbr_apparition + 1;
        }
    }
    printf("le nbr d'apparition du maximum est : %d\n",nbr_apparition);
    return 0;
}
