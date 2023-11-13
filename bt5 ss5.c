#include<stdio.h>
int main(){
	int ngay,thang,cungHoangDao;
	printf("Nhap ngay sinh:");
	scanf("%d",&ngay);
	printf("Nhap thang sinh:");
	scanf("%d",&thang);
	if(ngay==21&&thang==3||ngay==20&&thang==4){
		printf("cung hoang dao cua ban la bach duong");
	}else if(ngay==21&&thang==4||ngay==20&&thang==5){
		printf("cung hoang dao cua ban la kim nguu");
	}else if(ngay==21&&thang==5||ngay==21&&thang==6){
		printf("cung hoang dao cua ban la song tu");
	}else if(ngay==22&&thang==6||ngay==22&&thang==7){
		printf("cung hoang dao cua ban la cu giai");
	}else if(ngay==23&&thang==7||ngay==22&&thang==8){
		printf("cung hoang dao cua ban la su tu");
	}else if(ngay==23&&thang==8||ngay==22&&thang==9){
		printf("cung hoang dao cua ban la xu nu");
	}else if(ngay==23&&thang==9||ngay==23&&thang==10){
		printf("cung hoang dao cua ban la thien binh");
	}else if(ngay==24&&thang==10||ngay==22&&thang==11){
		printf("cung hoang dao cua ban la bo cap");
	}else if(ngay==23&&thang==11||ngay==21&&thang==12){
		printf("cung haong dao cua ban la nhan ma");
	}else if(ngay==22&&thang==12||ngay==19&&thang==1){
		printf("cung hoang dao cua ban la ma ket");
	}else if(ngay==20&&thang==1||ngay==18&&thang==2){
		printf("cung hoang dao cua ban la bao binh");
	}else if(ngay==19&&thang==2||ngay==20&&thang==3){
		printf("cung hoang dao cua ban la song nguu");
	}
	return 0;
}
