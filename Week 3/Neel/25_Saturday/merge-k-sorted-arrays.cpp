int sorted[101];

// your task is tocomplete this function
// function should return an pointer to output array int*
// of size k*k
void heapify(int *arr, int n, int i)
{
    int largest = i;
    int l = 2*i + 1;
    int r = 2*i + 2;
 
    // if left child is larger than root
    if (l < n && arr[l] > arr[largest])
        largest = l;
 
    // if right child is larger than largest so far
    if (r < n && arr[r] > arr[largest])
        largest = r;
 
    // if largest is not root
    if (largest != i)
    {
        swap(arr[i], arr[largest]);
        
        // recursively heapify the affected sub-tree
        heapify(arr, n, largest);
    }
}

void heapSort(int *arr, int n)
{
    // build heap (rearrange array)
    
    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(arr, n, i);
 
    // one by one extract an element from heap
    for (int i=n-1; i>=0; i--)
    {
        // move current root to end
        swap(arr[0], arr[i]);
        sorted[i] = arr[i];
        // call max heapify on the reduced heap
        heapify(arr, i, 0);
    }
    
    //return sorted;
}
 

int *mergeKArrays(int arr[][N], int k)
{
//code here
    int tot = k*k;
    int ar[tot];
    int m = 0;
    for(int i=0; i<k; i++){
        for(int j=0; j<k; j++){
            ar[m] = arr[i][j];
            m++;
        }
    }
    
    heapSort(ar, tot);
    int *ptr;
    ptr = sorted;
    return ptr;
}
