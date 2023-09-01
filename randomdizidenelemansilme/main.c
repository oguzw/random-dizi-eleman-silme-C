#include <stdio.h>
#include <stdlib.h>

void silme(int dizi[], int sirano, int elemansayisi)
{
    int i;
    if(sirano>=elemansayisi+1)
    {
        printf("Gecerli sayi giriniz.");
    }
    else
    {

        for(i=sirano-1; i<elemansayisi-1; i++)
        {
            dizi[i] = dizi[i+1];
        }
        printf("Yeni hali:\n");
        for(i=0; i<elemansayisi-1; i++)
        {
            printf("%d\n",dizi[i]);
        }

    }



}


int main()
{
    int n,i,sira;

    printf("Kac adet sayi olsun.\n");
    scanf("%d",&n);
    int dizi[n];
    srand(time(0));
    printf("Dizi listesi:\n");
    for(i=0; i<n; i++)
    {
        dizi[i]=rand()%10;
        printf("%d\n",dizi[i]);
    }

    printf("Kacinci elemani silmek istiyorsunuz?");
    scanf("%d",&sira);
    silme(dizi,sira,n);

    return 0;
}
