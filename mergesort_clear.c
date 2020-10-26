void merge(int arr[], int start, int mid, int end) {
  int i = start;
  int j = mid;

  // Intermediate storage for smallest values
  int buffer[end-start];
  int b = 0;

  for(int i = start; i < end; i++) {
    // Take the smallest j values
    while(j < end && (arr[i] > arr[j] || i == mid)) {
      buffer[b] = arr[j];
      b++;
      j++;
    }

    // Take an i value now that it's smaller than j
    if(b < end-start) {
      buffer[b] = arr[i];
      b++;
    }

    // Read from the buffer
    arr[i] = buffer[i - start];
  }
}

void msort(int arr[], int start, int end) {
  if(end - start <= 1) return;
  int mid = (start + end) / 2;

  msort(arr, start, mid);
  msort(arr, mid, end);

  merge(arr, start, mid, end);
}
