/* Bai 1: Viet ma C++ khai bao mang diem so cua 1 ban sinh vien. So luong phan tu bang 5. 
Hay yeu cau nhap vao cac diem do. Tinh trung binh cong cac diem. Hay xem co bao nhieu mon duoi trung binh */

// #include <iostream>
// using namespace std;
// int main() {
// 	double diem [5];
// 	int i;
// 	for (i = 0; i < 5; i++ ) {
// 	cout << "Nhap diem mon " <<i + 1<< ": ";
// 	cin >> diem [i];
// 	}
// 	double TB = (diem[0] + diem[1] + diem[2] + diem[3] + diem[4]) / 5;
// 	int count = 0;
// 	cout << "Diem trung binh la: " << TB << endl;
// 	for (int j = 0; j < 5; j++) {
// 		if (diem [j] < TB) {
// 			cout << "Diem mon " << j+1 <<" thap hon trung binh" << endl;
// 			count ++;
// 		}
// 	}
// 	cout << "So mon duoi trung binh la: " << count << endl;
// 	return 0;
// }



// /* Bai 2: Viet ma C++ yeu cau nhap vao 2 mang. 
// Mang 1: chieu cao 1 nguoi o cac nam 17,27,37,47 tuoi
// Mang 2: can nang cua ho o cac tuoi tren
// a. Khai bao mang 3 sao cho cac phan tu cua no luu tru chi so BMI
// b. Hay tra loi xem theo thoi gian thi suc khoe cua nguoi do ra sao?
// (tot hon hay kem di hay van on hay van kem o cac tuoi 17, 47. Biet 18 < BMI < 24) */

// #include <iostream>
// using namespace std;
// int main () 
// {
// 	double H[4];
// 	double W[4];
// 	double BMI[4];
// 	cout << "Chieu cao va can nang nam 17 tuoi: " << endl;
// 	cin >> H[0]; cin >> W[0];
// 	cout << "Chieu cao va can nang nam 27 tuoi: " << endl;
// 	cin >> H[1]; cin >> W[1];
// 	cout << "Chieu cao va can nang nam 37 tuoi: " << endl;
// 	cin >> H[2]; cin >> W[2];
// 	cout << "Chieu cao va can nang nam 47 tuoi: " << endl;
// 	cin >> H[3]; cin >> W[3];
// 	for (int i = 0; i < 4; i++)
// 	{
// 		BMI[i] = W[i] / (H[i] * H[i]);
// 	}
// 	int nam17 = -1; int nam47 = -1;
// 	if (BMI[0] > 18 && BMI[0] < 24) 
// 	{
// 		nam17 = 1;
// 	}	
// 	if (BMI[3] > 18 && BMI[3] < 24) 
// 	{
// 		nam47 = 1;
// 	}
// 	if (nam17 == -1)
// 	{
// 		if (nam17 * nam47 < 0)
// 		{
// 			cout << "Suc khoe tot hon" << endl;
// 		} else //nghia la nam17 = -1
// 			{
// 				cout << "Suc khoe van kem" << endl;
// 			}
// 	} else //nghia la nam17 = 1
// 		{
// 			if (nam17 * nam47 > 0)
// 			{
// 				cout << "Suc khoe van tot" << endl;
// 			} else 
// 				{
// 					cout << "Suc khoe kem di" << endl;
// 				}
// 		}
// 	return 0;
// }


/* Bai 3: Viet chuong trinh yeu cau nguoi dung nhap vao so mau (blood) cua quai vat
va suc cong pha cua dan (damage)
a. Tra loi xem quai vat se trung toi thieu bao nhieu dan moi chet
b. Yeu cau nhap vao khoang cach sung va quai vat L
Yeu cau nhap vao van toc V cua quai vat va nhap vao khoang thoi gian nap dan T
Hay xet xem lieu co ha duoc quai vat truoc khi no den duoc sung khong? */

#include <iostream>
#include <math.h>
using namespace std;
int main ()
{
	double blood, damage;
	cout << "Nhap vao so mau blood: "; cin >> blood;
	cout << "Nhap vao suc cong pha cua dan: "; cin >> damage;
	int d = ceil (blood / damage); 
	cout << "Quai vat phai trung toi thieu " << d << " vien dan moi chet." << endl;
	double L, T, V;
	cout << "Nhap vao lan luot khoang cach giua sung va quai vat, van toc cua quai vat, khoang thoi gian nap dan" << endl;
	cin >> L; cin >> V; cin >> T;
	double t;
	t = L / V;
	if (t > T * d)
	{
		cout << "Ha duoc quai vat truoc khi no den sung" << endl;
	} else 
		{
			cout << "Khong ha duoc quai vat truoc khi no den sung";
		}
	return 0;
}



