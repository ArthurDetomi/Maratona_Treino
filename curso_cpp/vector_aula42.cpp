#include <iostream>
// incluindo o vector
#include <vector>

using namespace std;

int main(void) {
    // declarando, pode ou não especificar tamanho nums(5)
    vector<int> nums1;
    vector<int> nums2;

    nums1.push_back(1);
    nums1.push_back(2);
    nums1.push_back(3);
    nums1.push_back(4);

    nums2.push_back(5);
    nums2.push_back(6);
    nums2.push_back(7);
    nums2.push_back(8);

    cout << "primeiro ele: " << nums1.front() << endl;
    cout << "ult ele: " << nums1.back() << endl;
    cout << "ele meio: " << nums1.at(nums1.size() / 2) << endl;

    // Insere em qualquer posição
    nums1.insert(nums1.begin(), 88);

    // Insere em qualquer posição
    nums1.insert(nums1.begin() + 2, 23);

    // Insere em qualquer posição
    nums1.insert(nums1.end() - 1, 21);

    // Apaga determinado elemento na posição especificada
    nums1.erase(nums1.begin());

    nums1.pop_back();

    int tam = nums1.size();

    cout << "Tama = " << tam << endl;

    for (int i = 0; i < tam; i++) {
        cout << nums1[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < nums2.size(); i++) {
        cout << nums2[i] << " ";
    }
    // Realiza uma troca
    nums1.swap(nums2);

    nums1.clear();
    nums2.clear();
    return 0;
}