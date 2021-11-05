//
// Created by Dmitry Morozov on 05.11.2021.
//

void b_sort(int arr[], size_t arr_size) {

    for (size_t i = 0; i < arr_size; i++) {
        bool already_sorted = true;

        for (size_t j = 0; j < arr_size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                std::swap(arr[j], arr[j + 1]);
                already_sorted = false;
            }
        }
        if (already_sorted) break;
    }
}
