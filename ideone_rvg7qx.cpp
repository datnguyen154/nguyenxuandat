#include <bits/stdc++.h>
using namespace std; 
void Nhapmang (int a[], int &n){
	for (int i = 0; i < n; i++){
		cout<<"\na[" <<i<<"]: ";
		cin>>a[i];
	}
}

void tbc (int a[], int &n){
	int sum=0;
	float count = 0;
	for (int i = 0; i <= n; i++){
		if (a[i] % 5 == 0)
		{
			sum += a[i];
			count++;
		}
	}
	if (count == 0)
        cout << "Khong co phan tu nao chia het cho 5.";
    else
        cout << "\nTrung binh cong cac phan tu chia het cho 5 la: " << sum / count;
}

void Sapxepgiam(int a[],int n){
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (a[i] < a[j])
			{
				int temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
		
}

void Xuatmang (int a[], int n){
	for (int i = 0; i < n; i++){
		cout<<"\na["<<i<<"]: ";
	cout<<a[i];
	}
	
}

int main (){
		int n;
		cout<<"\nNhap so luong cac phan tu trong mang: ";
		do {
			cin>>n;
			if (n <= 0 || n >= 100){
				cout<<"\nNhap lai n: ";
			}
			
		}while (n <= 0 || n >= 100);
		int a[n];
		Nhapmang (a,n);
		Xuatmang (a,n);
		tbc(a,n);
		Sapxepgiam (a,n);
		cout<<"\nMang sau khi duoc sap xep: ";
		Xuatmang (a,n);
		return 0;
}
