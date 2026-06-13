#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, tq;

    cout << "Enter number of processes: ";
    cin >> n;

    vector<int> bt(n), wt(n, 0), tat(n), rem_bt(n);

    cout << "Enter burst time for each process:\n";
    for (int i = 0; i < n; i++) {
        cout << "P" << i + 1 << ": ";
        cin >> bt[i];
        rem_bt[i] = bt[i];
    }

    cout << "Enter time quantum: ";
    cin >> tq;

    int time = 0;

    // Round Robin Logic
    while (true) {
        bool done = true;

        for (int i = 0; i < n; i++) {
            if (rem_bt[i] > 0) {
                done = false;

                if (rem_bt[i] > tq) {
                    time += tq;
                    rem_bt[i] -= tq;
                } else {
                    time += rem_bt[i];
                    wt[i] = time - bt[i];
                    rem_bt[i] = 0;
                }
            }
        }

        if (done)
            break;
    }

    // Turnaround time
    for (int i = 0; i < n; i++) {
        tat[i] = bt[i] + wt[i];
    }

    // Output
    cout << "\nProcess\tBurst Time\tWaiting Time\tTurnaround Time\n";
    for (int i = 0; i < n; i++) {
        cout << "P" << i + 1 << "\t\t"
             << bt[i] << "\t\t"
             << wt[i] << "\t\t"
             << tat[i] << endl;
    }

    return 0;
}