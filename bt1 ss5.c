#include<stdio.h>
main(){
	float a,b,c,delta,x1,x2,x;
	printf("Nhap a :");
	scanf("%f",&a);
	printf("Nhap b:");
	scanf("%f",&b);
	printf("Nhap c:");
	scanf("%f",&c);
	if(a==0){
		if(b==0){
			if(c==0){
				printf("phuong trinh co vo so nghiem:");
			}else{
				printf("phuong trinh vo nghiem:");
			}
		}else{
			printf("phuong trinh co nghiem duy nhat la:%f",x=-c/b);
		}
		
		
	}else {
		delta=b*b-4*a*c;
		if(delta<0){
			printf("Phuong trinh vo nghiem:");
		}else if(delta==0){
			printf("phuong trinh co nghiem kep la :%f",x1=x2=-b/(2*a));
		}else{
			printf("phuong trinh co 2 nghiem phan biet la:%f,%f",(-b+sqrt(delta))/(2*a),(-b-sqrt(delta))/(2*a));
			
		}
	}
	return 0;
}
