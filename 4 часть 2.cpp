#include<iostream>
using namespace std;


float av(int arr[], int n) {
    float count = 0;
    for (int i = 0; i < n; i++) {
        count = count + arr[i];
    }
    count = count / 2;
    return count;
}


int main() {
    int n;
    cout << "������� ������ �������: ";
    cin >> n;
    int arr[n];
    for (unsigned int i = 0; i < n; i++) {
        cout << "������� �������� ��� �������� ������� " << i << ": ";
        cin >> arr[i];
    }
    cout << "������� �������� :" << av(arr, n);

    return 0;
}
