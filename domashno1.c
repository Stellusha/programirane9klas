// #include <stdio.h>

// void printcharsonnewline(char *s);

// int main() {
//   char input[] = "someString";
//   printcharsonnewline(input);

//   return 0;
// }

// void printcharsonnewline(char *s) {
//   for (char index = 0; s[index] != '\0'; index++) {
//     char currentchar = s[index];
//     printf("%c\n", currentchar);
//   }
// }




// #include <stdio.h>

// int main() {

//   int arr[2][3] = {{1, 7, 6}, {5, 2, 3}};

//   for (int i = 0; i < 2; i++) {
//     for (int j = 0; j < 3; j++) {
//       if (arr[i][j] % 2 == 1) {
//         printf("%d ", arr[i][j]);
//       }
//     }
//   }

//   return 0;
// }




// #include <stdio.h>

// void bubblesort(int * arr, int arrlen);
// int sortedevenindexesproduct(int *arr, int arrlen);

// int main(void) {
//   int array[6] = {1,9,3,2,5};
//   int product = sortedevenindexesproduct(array, 6);
//   printf("%d", product);
//   return 0;
// }

// void bubblesort(int *arr, int arrlen) {
//   int sorted = 0;
//   for (int i = 0; i < arrlen - 1 && !sorted; i++) {
//     sorted = 1;
//     for (int j = 0; j < arrlen - i - 1; j++) {
//       if (arr[j] < arr[j + 1]) {
//         int temp = arr[j];
//         arr[j] = arr[j + 1];
//         arr[j + 1] = temp;
//         sorted = 0;
//       }
//     }
//   }
// }

// int sortedevenindexesproduct(int *arr, int arrlen) {
//   bubblesort(arr, arrlen);
//   int product = 1;
//   for (int i = 0; i < arrlen; i += 2) {
//     product *= arr[i];
//   }
//   return product;
// }




// #include <stdio.h>
// #include <string.h>

// void inssortdesc(char arr[7][10], int arrlen);
// int binsearch(char arr[7][10], int arrlen, char search[]);

// int main(void) {

//   char arr[7][10] = {
//     "Ivan",
//     "Marin",
//     "Marianna",
//     "Daniel",
//     "Nikolai",
//     "Plamena",
//     "Atanas",
//   };

//   inssortdesc(arr, 7);

//   printf("%s in array? => %d\n", "Dragan", binsearch(arr, 7, "Dragan"));
//   printf("%s in array? => %d\n", "Marin", binsearch(arr, 7, "Marin"));
//   return 0;
// }

// void inssortdesc(char arr[7][10], int arrlen) {
//   for (int i = 1; i < arrlen; i++) {
//     for (int j = i; j > 0 && strcmp(arr[j], arr[j-1]) > 0; j--) {
//       char temp[10];
//       strcpy(temp, arr[j]);
//       strcpy(arr[j], arr[j-1]);
//       strcpy(arr[j-1], temp);
//     }
//   }
// }

// int binsearch(char arr[7][10], int arrlen, char search[]) {
//   int left = 0;
//   int right = arrlen - 1;
//   while (left <= right) {  
//     int mid = (right + left) / 2;
//     int cmp = strcmp(arr[mid], search);
//     if (cmp == 0) return mid;

//     if (cmp < 0) {  
//       right = mid - 1;
//     } else { 
//       left = mid + 1;
//     }
//   }

//   return 0;
// }




#include <stdio.h>

int removeDuplicates(int* nums, int numsSize);

int main(void) {
  int nums[10] = {0, 0, 0, 1, 1, 2, 2, 5, 5, 7};
  int size = removeDuplicates(nums, 10);
  for (int i = 0; i < size; i++) {
    printf("%d ", nums[i]);
  }

  return 0;
}

int removeDuplicates(int* nums, int numsSize){
    if(numsSize == 0) return 0;
    int curel = nums[0];
    int k = 1;
    for (int i = 1; i < numsSize; i++) {
        if (nums[i] != curel) {
            nums[k] = nums[i];
            curel = nums[k];
            k++;
        }
    }
    return k;
}