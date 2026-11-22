#include <iostream>
#include <WIndows.h>
using namespace std;

void function1(int N, int K, char S) {
    for (int i = 0;i < N;++i) {
        for (int x = 0;x < K;++x) {
            cout << S << ' ';
        }
        cout << '\n';
    }
}



void function2(int num) {
    for (int i = num - 1; i > 0; --i) {
        num *= i;
    }
    cout << num;
}

void function3(int num) {
    int p_num = 1;
    if (num < 2) {
        p_num = 0;
       
    }
    else if (num == 2) {
        p_num = 2;
    }
    else if (num > 2) {
        for (int i = 2;i <= num;++i) {
            if (num % i == 0) {
                p_num += 1;
            }

        }
    }
    if (p_num == 2) {
        cout << "Це просте число";
    }
    else {
        cout << "Це не просте число";
    }
}



































void function8(int arr[], int size) {
    int start = 0;
    int end = size - 1;

    while (start != end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        end -= 1;
        start += 1;
    }
    for (int i = 0;i < size;++i) {
        cout << arr[i] << ' ';
    }

    cout << '\n';
}

//void function9(int arr[], int size) {
//    int sum = 0;
//    int sum_num = 0;
//    for (int i = 0;i < size;++i) {
//        for (int x = 2;x < arr[i] + 1;++x) {
//            if (arr[i] % x == 0) {
//                ++sum;
//            }
//            else {
//                continue;
//            }
//
//        }
//        if (sum == 2) {
//            sum_num += 1;
//        }
//        
//    }
//    //return sum_num;
//    cout << sum_num;
//}

int main()
{
    SetConsoleOutputCP(65001);


    //function1(5, 10, 'S');
    //function2(3);
    function3(12);
    //cout << ;








    const int size = 7;

    int arr[size] = { 1,2,3,4,5,6,7 };

    //function8(arr, size);
}
    
