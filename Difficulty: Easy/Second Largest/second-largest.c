//{ Driver Code Starts
// Initial Template for C
#include <limits.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char ts[1001];
    fgets(ts, sizeof(ts), stdin);
    int t = atoi(ts);

    while (t--) {
        char *line = NULL;
        size_t len = 0;
        getline(&line, &len, stdin); // Removed ssize_t

        int *nums = (int *)malloc(1000000 * sizeof(int));
        int n = 0;
        char *token = strtok(line, " ");
        while (token != NULL) {
            nums[n++] = atoi(token);
            token = strtok(NULL, " ");
        }

        // Call user-defined function
        int result = getSecondLargest(nums, n);
        printf("%d\n", result);
        printf("%s\n", "~");
        free(nums);
        free(line);
    }

    return 0;
}

// } Driver Code Ends


int getSecondLargest(int *arr, int n) {
    // code here
    int max1=INT_MIN;
    int max2=INT_MIN;
    int flag = 0;
    for(int i=0;i<n;++i)
    {
        if(arr[i]>max1)
        {
            max1 = arr[i];
        }
    }
    
     for(int i=0;i<n;++i)
    {
        if(arr[i]>max2 && arr[i]!=max1)
        {
            max2 = arr[i];
            flag = 1;
        }
    }
    
    if(flag)
    {
        return max2;
    }
    else
    {
        return -1;
    }
    
    
    
    
}
