#include <iostream>
#include <vector>
#include <climits>  // Для використання INT_MAX

using namespace std;

int findMinPositiveAfterMultipleOfTwo(const vector<int>& arr) {
    // Шукаємо перший елемент, кратний двом
    int firstMultipleOfTwoIndex = -1;
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] % 2 == 0) {
            firstMultipleOfTwoIndex = i;
            break;
        }
    }
    
    // Якщо елемент не знайдений, повертаємо -1
    if (firstMultipleOfTwoIndex == -1) {
        return -1;  // Не знайшли елемент, кратний двом
    }
    
    // Тепер шукаємо мінімальний додатний елемент правіше цього елемента
    int minPositive = INT_MAX;  // Початкове значення для мінімуму
    
    for (int i = firstMultipleOfTwoIndex + 1; i < arr.size(); i++) {
        if (arr[i] > 0 && arr[i] < minPositive) {
            minPositive = arr[i];
        }
    }
    
    // Якщо мінімальний додатний елемент не знайдений, повертаємо -1
    if (minPositive == INT_MAX) {
        return -1;
    }
    
    return minPositive;
}

int main() {
    int n;
    
    cout << "Vvedit' kil'kist' elementiv masyvu: ";
    cin >> n;  // Вводимо кількість елементів масиву
    
    vector<int> arr(n);
    
    cout << "Vvedit' elementy masyvu: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];  // Вводимо елементи масиву
    }
    
    int result = findMinPositiveAfterMultipleOfTwo(arr);
    
    if (result == -1) {
        cout << "Ne znaydeno elementiv pravishe pershogo elementa, kratnogo dvom." << endl;
    } else {
        cout << "Minimalne znachennya dodatnih elementiv: " << result << endl;
    ;}
    
    return 0;
}