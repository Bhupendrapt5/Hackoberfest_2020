#include<stdio.h>

 //swati tripathi
 //knapsack function with quicksort
  void swap(float* a, float* b) //for swapping float values
{
    float t = *a;
    *a = *b;
    *b = t;
}
  void swapin(int* a, int* b) //for swapping integers
{
    int t = *a;
    *a = *b;
    *b = t;
}

int partition (float arr[], float wt[], float pf[], int in[], int l, int h)
{
    float pivot = arr[h];
    int i = (l - 1);

    for (int j = l; j <= h- 1; j++)
    {

        if (arr[j]> pivot)
        {
            i++;
            swap(&arr[i], &arr[j]);
            swap(&wt[i], &wt[j]);
            swap(&pf[i], &pf[j]);
            swapin(&in[i], &in[j]);
        }
    }
    swap(&arr[i + 1], &arr[h]);
    swap(&wt[i+1], &wt[h]);
    swap(&pf[i+1], &pf[h]);
    swapin(&in[i+1], &in[h]);
    return (i + 1);
}

void quickSort(float arr[], float wt[], float pf[], int in[], int l, int h)
{
    if (l < h)
    {
        int pi = partition(arr,wt, pf, in, l, h);
        quickSort(arr,wt,pf, in, l, pi - 1);
        quickSort(arr, wt,pf, in, pi + 1, h);
    }
}

 void knapsack (int n, int index[], float w[], float p[], float capacity)
{
   float x[20];
   float total_profit = 0;
    int i, j;
    float W = capacity;

     for(i=0;i<n;i++)
        x[i]=0.0;

    float weight=0;

    for(i=0;i<n;i++)
    {
        int a=index[i];
        if(weight+w[i]<=W)
        {

            x[a]=1;
            weight=weight+w[i];
            total_profit=total_profit+p[i];
        }
        else
        {
            x[a]=(W-weight)/w[i];
            total_profit+=(x[a]*p[i]);
            weight=W;
            break;
        }
    }


   printf("\nsolution vector: \n");
    printf("[");
   for(i=0;i<n;i++)
   printf("%0.2f, ",x[i]);
  printf("]");

    printf("\n\nTotal Profit is : %f",total_profit);
}



 int main()
{
    float weight[20] = {0};
    float profit[20] = {0};
    int index[20]={0};
    float ratio[20]={0};
    float W,temp;
    int n ,i,j;

    printf("by Swati Tripathi,8142, 5CSE3X \n Fractional Knapsack problem\n");
    printf("Enter size of elements(max upto 20)\n");
    scanf("%d",&n);

   printf("\nEnter the weight and profits of each item : \n ");
   for (i = 0; i < n; i++) {
       printf("item %d : ", i+1);
       index[i]=i;
      scanf("%f %f", &weight[i], &profit[i]);
   }

   printf("\nEnter maximum capacity of knapsack:- ");
   scanf("%f", &W);
   printf("\n");

   for (i = 0; i < n; i++) {
      ratio[i] = profit[i] / weight[i];
   }

   quickSort(ratio, weight, profit, index, 0, n-1);

   knapsack(n, index, weight, profit, W);
 return 0;
}


