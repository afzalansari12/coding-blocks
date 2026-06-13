// #include <stdio.h>

// int main()
// {
//     int n;
//     int burst[20], waiting[20], turnaround[20];
//     int i, j;
//     float total_wait = 0, total_tat = 0;

//     printf("Enter number of processes (max 20): ");
//     scanf("%d", &n);

//     // Input burst times
//     for(i = 0; i < n; i++)
//     {
//         printf("Enter burst time for Process %d: ", i + 1);
//         scanf("%d", &burst[i]);
//     }

//     // First process waiting time is 0
//     waiting[0] = 0;

//     // Calculate waiting time
//     for(i = 1; i < n; i++)
//     {
//         waiting[i] = 0;
//         for(j = 0; j < i; j++)
//         {
//             waiting[i] += burst[j];
//         }
//     }

//     // Calculate turnaround time
//     for(i = 0; i < n; i++)
//     {
//         turnaround[i] = burst[i] + waiting[i];
//         total_wait += waiting[i];
//         total_tat += turnaround[i];
//     }

//     // Display results
//     printf("\nProcess\tBurst\tWaiting\tTurnaround\n");
//     for(i = 0; i < n; i++)
//     {
//         printf("P%d\t%d\t%d\t%d\n", 
//                i + 1, burst[i], waiting[i], turnaround[i]);
//     }

//     printf("\nAverage Waiting Time = %.2f", total_wait / n);
//     printf("\nAverage Turnaround Time = %.2f\n", total_tat / n);

//     return 0;
// }


#include <stdio.h>

int main()
{
    int bt[20], p[20], wt[20], tat[20];
    int i, j, n, total = 0, pos, temp;
    float avg_wt, avg_tat;

    printf("Enter number of processes: ");
    scanf("%d", &n);

    printf("\nEnter Burst Time:\n");
    for(i = 0; i < n; i++)
    {
        printf("P%d: ", i + 1);
        scanf("%d", &bt[i]);
        p[i] = i + 1;   // Store process number
    }

    // Sorting burst time using selection sort
    for(i = 0; i < n; i++)
    {
        pos = i;
        for(j = i + 1; j < n; j++)
        {
            if(bt[j] < bt[pos])
                pos = j;
        }

        // Swap burst time
        temp = bt[i];
        bt[i] = bt[pos];
        bt[pos] = temp;

        // Swap process numbers
        temp = p[i];
        p[i] = p[pos];
        p[pos] = temp;
    }

    // Calculate waiting time
    wt[0] = 0;
    for(i = 1; i < n; i++)
    {
        wt[i] = 0;
        for(j = 0; j < i; j++)
            wt[i] += bt[j];

        total += wt[i];
    }

    avg_wt = (float)total / n;
    total = 0;

    printf("\nProcess\tBurst Time\tWaiting Time\tTurnaround Time");

    // Calculate turnaround time
    for(i = 0; i < n; i++)
    {
        tat[i] = bt[i] + wt[i];
        total += tat[i];

        printf("\nP%d\t\t%d\t\t%d\t\t%d",
               p[i], bt[i], wt[i], tat[i]);
    }

    avg_tat = (float)total / n;

    printf("\n\nAverage Waiting Time = %.2f", avg_wt);
    printf("\nAverage Turnaround Time = %.2f\n", avg_tat);

    return 0;
}


