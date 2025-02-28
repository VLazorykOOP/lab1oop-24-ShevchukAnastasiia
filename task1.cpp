#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N;
    cout << "Введіть розмір масиву N: ";
    cin >> N;

    vector<int> A(N);
    cout << "Введіть елементи масиву A:\n";
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    // Формуємо новий масив без додатних елементів
    vector<int> B;
    for (int i = 0; i < N; i++) {
        if (A[i] <= 0) { // Додаємо лише недодатні елементи (від'ємні та нуль)
            B.push_back(A[i]);
        }
    }

    // Вивід результату
    cout << "Масив після видалення додатних елементів: ";
    for (int i = 0; i < B.size(); i++) {
        cout << B[i] << " ";
    }

    return 0;
}
