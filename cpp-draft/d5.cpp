#include <iostream>
#include <stdio.h>
using namespace std;

void addFunction(int arr[], int *size, int *index, int *value)
{
    (*size)++;
    for (int i = *size - 1; i > *index; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[*index] = *value;
}

void updateFunction(int arr[], int *size, int *index, int *value)
{
    arr[*index] = *value;
}

void deleteFunction(int arr[], int *size, int *index)
{
    for (int i = *index; i < *size - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    (*size)--;
}

void display(int array[], int *size)
{
    cout << "\nMANG CUA BAN LA: ";
    for (int i = 0; i < *size; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
}

void sort(int array[], int sortedArray[], int *size)
{
    for (int i = 0; i < *size; i++)
    {
        sortedArray[i] = array[i];
    }

    for (int i = 0; i < *size; i++)
    {
        for (int j = i + 1; j < *size; j++)
        {
            if (sortedArray[j] < sortedArray[i])
            {
                int temp = sortedArray[j];
                sortedArray[j] = sortedArray[i];
                sortedArray[i] = temp;
            }
        }
    }

    cout << "\nMANG DA SAP XEP CUA BAN LA: ";
    for (int i = 0; i < *size; i++)
    {
        cout << sortedArray[i] << " ";
    }
    cout << endl;
}

int main()
{
    int array[999];
    int sortedArray[999];
    int option;
    int size, index, value;
    bool isQuit = false;
    char userChosen;
    cout << "CHAO MUNG DEN VOI TINH TOAN MANG C++" << endl;
    cout << "Nhap so luong phan tu cua mang: ";
    cin >> size;
    cout << "Nhap mang: " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << "array[" << i << "] = ";
        cin >> array[i];
    }

    while (!isQuit)
    {
        cout << "\nXin moi chon nhiem vu:\n1.Xem mang.\n2.Them phan tu.\n3.Cap nhat phan tu.\n4.Xoa phan tu.\n5.Sap xep mang.\nq.Thoat chuong trinh.\n";
        cout << "Toi chon nhiem vu: ";
        cin >> userChosen;
        switch (userChosen)
        {
        case '1':
            display(array, &size);
            break;
        case '2':
            cout << "\nChon index muon them phan tu: ";
            cin >> index;
            if (index > size)
            {
                cout << "Khong the them phan tu vao index nay" << endl;
                break;
            }
            cout << "Nhap gia tri phan tu: ";
            cin >> value;
            addFunction(array, &size, &index, &value);
            display(array, &size);
            break;
        case '3':
            cout << "\nChon index muon cap nhat phan tu: ";
            cin >> index;
            if (index >= size)
            {
                cout << "Khong the cap nhat phan tu o index nay" << endl;
                break;
            }
            cout << "Nhap gia tri phan tu moi: ";
            cin >> value;
            updateFunction(array, &size, &index, &value);
            display(array, &size);
            break;
        case '4':
            cout << "\nChon index muon xoa phan tu: ";
            cin >> index;
            if (index >= size)
            {
                cout << "Khong the xoa phan tu o index nay" << endl;
                break;
            }
            deleteFunction(array, &size, &index);
            display(array, &size);
            break;
        case '5':
            sort(array, sortedArray, &size);
            break;
        case 'q':
            isQuit = true;
            cout << "\nGoodbye!" << endl;
            break;
        default:
            cout << "Ban da nhap sai, vui long nhap lai." << endl;
            break;
        }
    }

    system("pause");
    return 0;
}