#include <stdio.h>

int main()
{
    int tab[100], max=0, nbr_apparition=0, i,nbr_elem_in_table ;
    int min = 0,ind_min,ind_max;
    int tmp ; 
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
    min = tab[0];
    max = tab[0];
    
    //le maximum : 
    for( i = 0 ; i<nbr_elem_in_table;i++){
        if(max<tab[i]){
            max=tab[i];
            ind_max = i;
        }
    }
    
    printf("le maximum est : %d avec l'index dans le tableau %d \n",max,ind_max);
    
    
    //le minimum
    for(int i = 0;i<nbr_elem_in_table;i++){
        if(tab[i] < min){
            min = tab[i];
            ind_min = i ;
        }
    }
    printf("le nbr d'apparition du maximum est : %d avec l'index dans le tableau %d \n",min,ind_min);
    //affichage du tableau avant permutation ;
    printf("talbeau avant permutation : \n ");
    for(int i = 0;i<nbr_elem_in_table;i++){
        // printf("%d \n",i);
        printf("%d ",tab[i]);
    }
   
    //permutation entre le min et le max
    tmp = tab[ind_min];
    tab[ind_min] = tab[ind_max];
    tab[ind_max] = tmp;
    printf("\n");
    //affichage du tableau apres permutation ;
    for(int i = 0;i<nbr_elem_in_table;i++){
        // printf("%d \n",i);
        printf("%d ",tab[i]);
    }
    return 0;
}
