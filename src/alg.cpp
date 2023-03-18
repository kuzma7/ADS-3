// Copyright 2021 NNTU-CS

int cbinsearch(int *arr, int size, int value) {
  int left = 0;
    int right = size - 1;
    int count = 0;
    while (left <= right) {
        int mid = (left + right) / 2;
        if (arr[mid] == value) {
            count++;
            int i = mid - 1;
            while (i >= left && arr[i] == value) {
                count++;
                i--;
            }
            i = mid + 1;
            while (i <= right && arr[i] == value) {
                count++;
                i++;
            }
            return count;
        } else if (arr[mid] > value) {
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }
    return count;
}
