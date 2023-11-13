#include<stdio.h>
int main(){
	float tongDoanhThu,hoaHong;
	printf("Nhap doanh thu ban hang cua dai ly:");
	scanf("%f",&tongDoanhThu);
	if(tongDoanhThu <=100){
		hoaHong = tongDoanhThu * 5/100;
		printf(" hoa hong dai ly theo muc doanh thu ban hang cua tung dai ly la: %.2f",hoaHong);
	}else if(tongDoanhThu <=300){
		hoaHong = tongDoanhThu * 10/100;
		printf(" hoa hong dai ly theo muc doanh thu ban hang cua tung dai ly la: %.2f",hoaHong);
	}else if(tongDoanhThu >300){
		hoaHong = tongDoanhThu * 20/100;
		printf(" hoa hong dai ly theo muc doanh thu ban hang cua tung dai ly la: %.2f",hoaHong);
	}
	return 0;	
}
