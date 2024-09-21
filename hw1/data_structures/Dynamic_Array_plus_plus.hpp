#include <iostream>
class Dynamic_Array_plus_plus {
    public:
        Dynamic_Array_plus_plus(): capacity(1), size(0){
            arr = new int[1];
        }
        ~Dynamic_Array_plus_plus() {
            delete[] arr;
        }
        void push_back(int x){
            if (size == capacity){
                ++capacity;
                int *newarr = new int[capacity];
                for (int i=0; i<size; i++){
                    newarr[i] = arr[i];
                }
                delete [] arr;
                arr = newarr;
            }
            arr[size++] = x;
        }
        long long getSum(){
            long long sum = 0;
            for (int i=0; i<size; i++){
                sum += arr[i];
            }
            return sum;
        }


    private:
        int capacity;
        int size;
        int *arr;
};