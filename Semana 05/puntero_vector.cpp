#include <iostream>
using namespace std;

int main()
{
    int vec[5] = {10, 20, 30, 40, 50};
    int *puntero;

    puntero = vec;
    cout << *puntero << endl;
    puntero++;
    cout << *puntero << endl;
    puntero++;
    cout << *puntero << endl;
    puntero++;
    cout << *puntero << endl;
    puntero++;
    cout << *puntero << endl;


    cout << endl;
    cout << *(vec + 0) << endl;
    cout << *(vec + 1) << endl;
    cout << *(vec + 2) << endl;
    cout << *(vec + 3) << endl;
    cout << *(vec + 4) << endl;


    cout << endl;
//    cout << *(&vec[0]) << endl;
//    cout << *(&vec[1]) << endl;
//    cout << *(&vec[2]) << endl;
//    cout << *(&vec[3]) << endl;
//    cout << *(&vec[4]) << endl;

    cout << vec[0] << endl;
    cout << vec[1] << endl;
    cout << vec[2] << endl;
    cout << vec[3] << endl;
    cout << vec[4] << endl;

    // vector[1] --> vector + 1 ---> *(vector + 1)
//
//    cout << endl;
//
//    int matriz[3][3] =
//    {
//        {1,2,3},
//        {4,5,6},
//        {7,8,9}
//    };
//
//
//    cout << *(*(matriz) + 8) << endl;
    cout << endl;

    int nums[10] = {12,432,534,64,75,8,69,75,56,45};
    int *pNums = nums;
    int maximos = 0;

    for(int i = 0; i < 10; i++)
    {
        maximo = *(pNums + i);
        cout << *(pNums + i) << endl;
    }





    return 0;
}
