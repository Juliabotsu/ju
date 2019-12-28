#include <stdio.h>
#include <stdlib.h>

typedef struct Item{
    char name[30];
    int price;
    int warranty;
    struct{
        char buyName[30];
        int buyPrice;
        int quantity;
        char seller[30];
    }buy;
}Item;

int main()
{
	int i;
    char path[40];
    FILE *read;
    printf("Enter path to file:");
    scanf("%s",&path);
    read = fopen(path,"r");

    printf("\nFile %s opened",path);
    int counter = 0;
    while((fgetc(read)) != EOF){
        counter++;
    }
    fclose(read);
    printf("\n%d", counter);
    char fileB[counter];
    read = fopen(path,"r");
    if(read == NULL){
        printf("Invalid File or Path");
        return -100;
    }
    fscanf(read,"%s", &fileB);
    fclose(read);
    printf("%s", fileB);
    for(i=0; i<counter; i++){
        if(fileB[i] == '@' || fileB[i] == '#'){
            fileB[i] = '\n';
        }
    }
    printf("\n%s", fileB);
    FILE* write;
    char tmpPath[100];
    printf("\nEnter path to tmp file:");
    scanf("%s",&tmpPath);
    write = fopen(tmpPath, "w");
    if(write == NULL){
        printf("Invalid File or Path");
        return -100;
    }
    fprintf(write, "%s",fileB);
    fclose(write);
    int cStrings = 0;
    read = fopen(tmpPath,"r");
    if(read == NULL){
        printf("Invalid File or Path");
        return -100;
    }
    while(!feof(read) && !ferror(read)) {
        fscanf(read, "%*[^\n]%*c");
        cStrings++;
    }
    fclose(read);
    read = fopen(tmpPath,"r");
    if(read == NULL){
        printf("Invalid File or Path");
        return -100;
    }
    int number = ((cStrings-1)/7);
    Item *items = malloc(sizeof(Item) * number);
    int j = 0;
    while(j<number){
        fscanf(read,"%s",&items[j].name);
        fscanf(read,"%d",&items[j].price);
        fscanf(read,"%d",&items[j].warranty);
        fscanf(read,"%s",&items[j].buy.buyName);
        fscanf(read,"%d",&items[j].buy.buyPrice);
        fscanf(read,"%d",&items[j].buy.quantity);
        fscanf(read,"%s",&items[j].buy.seller);
        j++;
    }

    for( i = 0; i<number; i++){
        printf("\n%-20s%-20d%-20d%-20s%-20d%-20d%-20s",items[i].name,items[i].price,items[i].warranty,items[i].buy.buyName,items[i].buy.buyPrice,items[i].buy.quantity,items[i].buy.seller);
    }

    return 0;
}
