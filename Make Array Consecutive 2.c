// Arrays are already defined with this interface:
// typedef struct arr_##name {
//   int size;
//   type *arr;
// } arr_##name;
//
// arr_##name alloc_arr_##name(int len) {
//   arr_##name a = {len, len > 0 ? malloc(sizeof(type) * len) : NULL};
//   return a;
// }
//
//
int solution(arr_integer statues) {
        
    int tmp;
     for (int i = 0; i < statues.size; i++)
    {
        for (int j = 0; j < statues.size - i - 1; j++)
        {
            if (statues.arr[j] < statues.arr[j+1])
            {
                tmp = statues.arr[j];
                statues.arr[j] = statues.arr[j+1];
                statues.arr[j+1] = tmp;
            }
        }
    }
    
    int missing=0;
    for (int i = 0; i < statues.size - 1; i++){
        missing += (statues.arr[i] - statues.arr[i + 1] - 1);
    }
    return missing;
}
