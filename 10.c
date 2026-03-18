#include <stdio.h>

int main() {
    int n = 3, W = 50;
    int profit[] = {60, 100, 120};
    int weight[] = {10, 20, 30};
    float ratio[3], total = 0;

    for(int i = 0; i < n; i++)
        ratio[i] = (float)profit[i] / weight[i];

    for(int i = 0; i < n - 1; i++)
        for(int j = i + 1; j < n; j++)
            if(ratio[i] < ratio[j]) {
                float t = ratio[i]; ratio[i] = ratio[j]; ratio[j] = t;
                int tp = profit[i]; profit[i] = profit[j]; profit[j] = tp;
                int tw = weight[i]; weight[i] = weight[j]; weight[j] = tw;
            }

    for(int i = 0; i < n; i++) {
        if(weight[i] <= W) {
            W -= weight[i];
            total += profit[i];
        }
    }

    printf("Approx Profit = %.0f", total);
}
