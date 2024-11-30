#include<stdio.h>
#include <math.h>

int main(){

	float ogrencipuan,tskor;
	long long ogrencino;
	int n;
	
	printf("***** Karabuk Universitesi Bagil Not ve Harf Notu Hesaplama Sistemi *****\n\n");
	
	printf("Lutfen ogrenci numaranizi giriniz : "),scanf("%lld",&ogrencino),printf("\n");
	printf("Lutfen notunuzu giriniz : "),scanf("%f",&ogrencipuan),printf("\n");
	printf("Veri kumesinin boyutunu girin: ");
    scanf("%d", &n);

    double data[n];
    double sum = 0.0, mean, variance = 0.0, stddev;
	printf("\n");
    printf("***** Veri kumesini girin *****\n\n");
    for (int i = 0; i < n; i++) {
        printf("%d. degeri girin: ", i + 1);
        scanf("%lf", &data[i]);
        sum += data[i]; 
    }

    mean = sum / n;

    for (int i = 0; i < n; i++) {
        variance += pow(data[i] - mean, 2);
    }
    variance /= n;
    
    stddev = sqrt(variance);

	printf("\n");
	printf("Sinif ortalamasi: %.2lf\n", mean),printf("Standart sapma degeri: %.2lf\n", stddev);
	printf("\n");
	
	tskor=((ogrencipuan-mean)/stddev)*10+50;
	
	if(mean<=42.5){
		if(tskor<36){
			printf("Harf notunuz : FF , %lld nolu ogrencimiz Maalesef bu dersi gecemediniz",ogrencino);
		}
		if(tskor>=36 && tskor<=40.99){
			printf("Harf notunuz : FD , %lld nolu ogrencimiz Maalesef bu dersi gecemediniz",ogrencino);
		}
		if(tskor>=41 && tskor<=45.99){
			printf("Harf notunuz : DD , %lld nolu ogrencimiz Maalesef bu dersi gecemediniz",ogrencino);
		}
		if(tskor>=46 && tskor<=50.99){
			printf("Harf notunuz : DC , %lld nolu ogrencimiz Tebrikler ancak bu dersi kosullu gectiniz",ogrencino);
		}
		if(tskor>=51 && tskor<=55.99){
			printf("Harf notunuz : CC , %lld nolu ogrencimiz Tebrikler bu dersi gectiniz",ogrencino);
		}
		if(tskor>=56 && tskor<=60.99){
			printf("Harf notunuz : CB , %lld nolu ogrencimiz Tebrikler bu dersi gectiniz",ogrencino);
		}
		if(tskor>=61 && tskor<=65.99){
			printf("Harf notunuz : BB , %lld nolu ogrencimiz Tebrikler bu dersi gectiniz",ogrencino);
		}
		if(tskor>=66 && tskor<=70.99){
			printf("Harf notunuz : BA , %lld nolu ogrencimiz Tebrikler bu dersi gectiniz",ogrencino);
		}
		if(tskor>=71){
			printf("Harf notunuz : AA , %lld nolu ogrencimiz Tebrikler bu dersi gectiniz",ogrencino);
		}
	}
	if(mean>42.5 && mean<=47.5){
		if(tskor<34){
			printf("Harf notunuz : FF , %lld nolu ogrencimiz Maalesef bu dersi gecemediniz",ogrencino);
		}
		if(tskor>=34 && tskor<=38.99){
			printf("Harf notunuz : FD , %lld nolu ogrencimiz Maalesef bu dersi gecemediniz",ogrencino);
		}
		if(tskor>=39 && tskor<=43.99){
			printf("Harf notunuz : DD , %lld nolu ogrencimiz Maalesef bu dersi gecemediniz",ogrencino);
		}
		if(tskor>=44 && tskor<=48.99){
			printf("Harf notunuz : DC , %lld nolu ogrencimiz Tebrikler ancak bu dersi kosullu gectiniz",ogrencino);
		}
		if(tskor>=49 && tskor<=53.99){
			printf("Harf notunuz : CC , %lld nolu ogrencimiz Tebrikler bu dersi gectiniz",ogrencino);
		}
		if(tskor>=54 && tskor<=58.99){
			printf("Harf notunuz : CB , %lld nolu ogrencimiz Tebrikler bu dersi gectiniz",ogrencino);
		}
		if(tskor>=59 && tskor<=63.99){
			printf("Harf notunuz : BB , %lld nolu ogrencimiz Tebrikler bu dersi gectiniz",ogrencino);
		}
		if(tskor>=64 && tskor<=68.99){
			printf("Harf notunuz : BA , %lld nolu ogrencimiz Tebrikler bu dersi gectiniz",ogrencino);
		}
		if(tskor>=69){
			printf("Harf notunuz : AA , %lld nolu ogrencimiz Tebrikler bu dersi gectiniz",ogrencino);
		}
	}
	if(mean>47.5 && mean<=52.5){
		if(tskor<32){
			printf("Harf notunuz : FF , %lld nolu ogrencimiz Maalesef bu dersi gecemediniz",ogrencino);
		}
		if(tskor>=32 && tskor<=36.99){
			printf("Harf notunuz : FD , %lld nolu ogrencimiz Maalesef bu dersi gecemediniz",ogrencino);
		}
		if(tskor>=37 && tskor<=41.99){
			printf("Harf notunuz : DD , %lld nolu ogrencimiz Maalesef bu dersi gecemediniz",ogrencino);
		}
		if(tskor>=42 && tskor<=46.99){
			printf("Harf notunuz : DC , %lld nolu ogrencimiz Tebrikler ancak bu dersi kosullu gectiniz",ogrencino);
		}
		if(tskor>=47 && tskor<=51.99){
			printf("Harf notunuz : CC , %lld nolu ogrencimiz Tebrikler bu dersi gectiniz",ogrencino);
		}
		if(tskor>=52 && tskor<=56.99){
			printf("Harf notunuz : CB , %lld nolu ogrencimiz Tebrikler bu dersi gectiniz",ogrencino);
		}
		if(tskor>=57 && tskor<=61.99){
			printf("Harf notunuz : BB , %lld nolu ogrencimiz Tebrikler bu dersi gectiniz",ogrencino);
		}
		if(tskor>=62 && tskor<=66.99){
			printf("Harf notunuz : BA , %lld nolu ogrencimiz Tebrikler bu dersi gectiniz",ogrencino);
		}
		if(tskor>=67){
			printf("Harf notunuz : AA , %lld nolu ogrencimiz Tebrikler bu dersi gectiniz",ogrencino);
		}
	}
	if(mean>52.5 && mean<=57.5){
		if(tskor<30){
			printf("Harf notunuz : FF , %lld nolu ogrencimiz Maalesef bu dersi gecemediniz",ogrencino);
		}
		if(tskor>=30 && tskor<=34.99){
			printf("Harf notunuz : FD , %lld nolu ogrencimiz Maalesef bu dersi gecemediniz",ogrencino);
		}
		if(tskor>=35 && tskor<=39.99){
			printf("Harf notunuz : DD , %lld nolu ogrencimiz Maalesef bu dersi gecemediniz",ogrencino);
		}
		if(tskor>=40 && tskor<=44.99){
			printf("Harf notunuz : DC , %lld nolu ogrencimiz Tebrikler ancak bu dersi kosullu gectiniz",ogrencino);
		}
		if(tskor>=45 && tskor<=49.99){
			printf("Harf notunuz : CC , %lld nolu ogrencimiz Tebrikler bu dersi gectiniz",ogrencino);
		}
		if(tskor>=50 && tskor<=54.99){
			printf("Harf notunuz : CB , %lld nolu ogrencimiz Tebrikler bu dersi gectiniz",ogrencino);
		}
		if(tskor>=55 && tskor<=59.99){
			printf("Harf notunuz : BB , %lld nolu ogrencimiz Tebrikler bu dersi gectiniz",ogrencino);
		}
		if(tskor>=60 && tskor<=64.99){
			printf("Harf notunuz : BA , %lld nolu ogrencimiz Tebrikler bu dersi gectiniz",ogrencino);
		}
		if(tskor>=65){
			printf("Harf notunuz : AA , %lld nolu ogrencimiz Tebrikler bu dersi gectiniz",ogrencino);
		}
	}
	if(mean>57.5 && mean<=62.5){
		if(tskor<28){
			printf("Harf notunuz : FF , %lld nolu ogrencimiz Maalesef bu dersi gecemediniz",ogrencino);
		}
		if(tskor>=28 && tskor<=32.99){
			printf("Harf notunuz : FD , %lld nolu ogrencimiz Maalesef bu dersi gecemediniz",ogrencino);
		}
		if(tskor>=33 && tskor<=37.99){
			printf("Harf notunuz : DD , %lld nolu ogrencimiz Maalesef bu dersi gecemediniz",ogrencino);
		}
		if(tskor>=38 && tskor<=42.99){
			printf("Harf notunuz : DC , %lld nolu ogrencimiz Tebrikler ancak bu dersi kosullu gectiniz",ogrencino);
		}
		if(tskor>=43 && tskor<=47.99){
			printf("Harf notunuz : CC , %lld nolu ogrencimiz Tebrikler bu dersi gectiniz",ogrencino);
		}
		if(tskor>=48 && tskor<=52.99){
			printf("Harf notunuz : CB , %lld nolu ogrencimiz Tebrikler bu dersi gectiniz",ogrencino);
		}
		if(tskor>=53 && tskor<=57.99){
			printf("Harf notunuz : BB , %lld nolu ogrencimiz Tebrikler bu dersi gectiniz",ogrencino);
		}
		if(tskor>=58 && tskor<=62.99){
			printf("Harf notunuz : BA , %lld nolu ogrencimiz Tebrikler bu dersi gectiniz",ogrencino);
		}
		if(tskor>=63){
			printf("Harf notunuz : AA , %lld nolu ogrencimiz Tebrikler bu dersi gectiniz",ogrencino);
		}
	}
	if(mean>62.5 && mean<=70){
		if(tskor<26){
			printf("Harf notunuz : FF , %lld nolu ogrencimiz Maalesef bu dersi gecemediniz",ogrencino);
		}
		if(tskor>=26 && tskor<=30.99){
			printf("Harf notunuz : FD , %lld nolu ogrencimiz Maalesef bu dersi gecemediniz",ogrencino);
		}
		if(tskor>=31 && tskor<=35.99){
			printf("Harf notunuz : DD , %lld nolu ogrencimiz Maalesef bu dersi gecemediniz",ogrencino);
		}
		if(tskor>=36 && tskor<=40.99){
			printf("Harf notunuz : DC , %lld nolu ogrencimiz Tebrikler ancak bu dersi kosullu gectiniz",ogrencino);
		}
		if(tskor>=41 && tskor<=45.99){
			printf("Harf notunuz : CC , %lld nolu ogrencimiz Tebrikler bu dersi gectiniz",ogrencino);
		}
		if(tskor>=46 && tskor<=50.99){
			printf("Harf notunuz : CB , %lld nolu ogrencimiz Tebrikler bu dersi gectiniz",ogrencino);
		}
		if(tskor>=51 && tskor<=55.99){
			printf("Harf notunuz : BB , %lld nolu ogrencimiz Tebrikler bu dersi gectiniz",ogrencino);
		}
		if(tskor>=56 && tskor<=60.99){
			printf("Harf notunuz : BA , %lld nolu ogrencimiz Tebrikler bu dersi gectiniz",ogrencino);
		}
		if(tskor>=61){
			printf("Harf notunuz : AA , %lld nolu ogrencimiz Tebrikler bu dersi gectiniz",ogrencino);
		}
	}
	if(mean>70 && mean<=80){
		if(tskor<24){
			printf("Harf notunuz : FF , %lld nolu ogrencimiz Maalesef bu dersi gecemediniz",ogrencino);
		}
		if(tskor>=24 && tskor<=28.99){
			printf("Harf notunuz : FD , %lld nolu ogrencimiz Maalesef bu dersi gecemediniz",ogrencino);
		}
		if(tskor>=29 && tskor<=33.99){
			printf("Harf notunuz : DD , %lld nolu ogrencimiz Maalesef bu dersi gecemediniz",ogrencino);
		}
		if(tskor>=34 && tskor<=38.99){
			printf("Harf notunuz : DC , %lld nolu ogrencimiz Tebrikler ancak bu dersi kosullu gectiniz",ogrencino);
		}
		if(tskor>=39 && tskor<=43.99){
			printf("Harf notunuz : CC , %lld nolu ogrencimiz Tebrikler bu dersi gectiniz",ogrencino);
		}
		if(tskor>=44 && tskor<=48.99){
			printf("Harf notunuz : CB , %lld nolu ogrencimiz Tebrikler bu dersi gectiniz",ogrencino);
		}
		if(tskor>=49 && tskor<=53.99){
			printf("Harf notunuz : BB , %lld nolu ogrencimiz Tebrikler bu dersi gectiniz",ogrencino);
		}
		if(tskor>=54 && tskor<=58.99){
			printf("Harf notunuz : BA , %lld nolu ogrencimiz Tebrikler bu dersi gectiniz",ogrencino);
		}
		if(tskor>=59){
			printf("Harf notunuz : AA , %lld nolu ogrencimiz Tebrikler bu dersi gectiniz",ogrencino);
		}
	}
	if(mean>80 && mean<=100){
		if(tskor<22){
			printf("Harf notunuz : FF , %lld nolu ogrencimiz Maalesef bu dersi gecemediniz",ogrencino);
		}
		if(tskor>=22 && tskor<=26.99){
			printf("Harf notunuz : FD , %lld nolu ogrencimiz Maalesef bu dersi gecemediniz",ogrencino);
		}
		if(tskor>=27 && tskor<=31.99){
			printf("Harf notunuz : DD , %lld nolu ogrencimiz Maalesef bu dersi gecemediniz",ogrencino);
		}
		if(tskor>=32 && tskor<=36.99){
			printf("Harf notunuz : DC , %lld nolu ogrencimiz Tebrikler ancak bu dersi kosullu gectiniz",ogrencino);
		}
		if(tskor>=37 && tskor<=41.99){
			printf("Harf notunuz : CC , %lld nolu ogrencimiz Tebrikler bu dersi gectiniz",ogrencino);
		}
		if(tskor>=42 && tskor<=46.99){
			printf("Harf notunuz : CB , %lld nolu ogrencimiz Tebrikler bu dersi gectiniz",ogrencino);
		}
		if(tskor>=47 && tskor<=51.99){
			printf("Harf notunuz : BB , %lld nolu ogrencimiz Tebrikler bu dersi gectiniz",ogrencino);
		}
		if(tskor>=52 && tskor<=56.99){
			printf("Harf notunuz : BA , %lld nolu ogrencimiz Tebrikler bu dersi gectiniz",ogrencino);
		}
		if(tskor>=57){
			printf("Harf notunuz : AA , %lld nolu ogrencimiz Tebrikler bu dersi gectiniz",ogrencino);
		}
	}
		printf("\n\n Bu sistem Yusuf Salih Akcayir tarafindan gelistirilmistir.");
	return 0;
	
}
