#include <iostream>
#include <stdlib.h>

#define ITEM_SIZE 10

using namespace std;

void Exchange(int *arr, int targetA, int targetB){
  int temp = arr[targetA];
  arr[targetA] = arr[targetB];
  arr[targetB] = temp;
}

void print_arr(int a[], int size) {
  for (int i = 0; i < size; i++) {
    cout << a[i] << ' ';
  }
  cout << '\n';
}

void max_heapify(int a[], int idx, int size) {
  int left = idx * 2;
  int right = (idx * 2) + 1;
  int largest = idx;
  int tmp = 0;

  // 왼쪽 자식 노드와 비교
  if (left < size && a[left] > a[largest]) {
    largest = left;
  }

  // 오른쪽 자식 노드와 비교
  if (right < size && a[right] > a[largest]) {
    largest = right;
  }

  // 부모 노드보다 자식 노드가 큰 경우 교환
  if (largest != idx) {
    Exchange(a, largest, idx);
    // 재귀 호출
    max_heapify(a, largest, size);
  }
}

void build_max_heap(int a[], int size) {
  for (int i = size / 2; i > 0; i--) {
    max_heapify(a, i, size);
  }
}

void heap_sort(int a[], int size) {
  int tmp = 0;

  build_max_heap(a, size);
  for (int count = size - 1; count > 0; count--) {
    Exchange(a, count, 1);
    max_heapify(a, 1, count);
  }
}

int main() {
  int a[ITEM_SIZE] = { 0, 5, 3, 17, 10, 84, 19, 6, 22, 9}; // 루트 노드는 1번 인덱스 부터 시작
//  for (int i = 1; i < ITEM_SIZE; i++) {m
//    a[i] = (rand() % (ITEM_SIZE * 10)) + 1;
//  }

  print_arr(a, ITEM_SIZE);
  heap_sort(a, ITEM_SIZE);
  print_arr(a, ITEM_SIZE);
  return 0;
}