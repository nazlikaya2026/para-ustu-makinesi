#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*Para ustu makinesi*/



int main(   ) {

	int sayi200TL, sayi100TL, sayi50TL, sayi20TL, sayi10TL, sayi5TL, sayi1TL, sayi50kurus, sayi25kurus, sayi10kurus, sayi5kurus, sayi1kurus;
	float urun_tutari, odenen_para, para_ustu;
	int toplam_kurus, adet;
    
	printf("urun tutari giriniz (TL)");
	scanf("%f", &urun_tutari);
	
	printf("odenen parayi giriniz (TL)");
	scanf("%f", &odenen_para);
	
	para_ustu = odenen_para - urun_tutari;
	
	toplam_kurus = (int)round(para_ustu * 100);
	
	printf("toplam kurus : %d", toplam_kurus);
	
	//200TL
	sayi200TL = toplam_kurus / 20000;
	toplam_kurus = toplam_kurus % 20000;
	
	//100TL
	sayi100TL = toplam_kurus / 10000;
	toplam_kurus = toplam_kurus % 10000;
	
	//50TL
	sayi50TL = toplam_kurus / 5000;
	toplam_kurus = toplam_kurus % 5000;
	
	//20TL
	sayi20TL = toplam_kurus / 2000;
	toplam_kurus = toplam_kurus % 2000;
	
	//10TL
	sayi10TL = toplam_kurus / 1000;
	toplam_kurus = toplam_kurus % 1000;
	
	//5TL
	sayi5TL = toplam_kurus / 500;
	toplam_kurus = toplam_kurus % 500;
	
	//1TL
	sayi1TL = toplam_kurus / 100;
	toplam_kurus = toplam_kurus % 100;
	
	//50kurus
	sayi50kurus = toplam_kurus / 50;
	toplam_kurus = toplam_kurus % 50;
	
	//25kurus
	sayi25kurus = toplam_kurus / 25;
	toplam_kurus = toplam_kurus % 25;
	
	//10kurus
	sayi10kurus= toplam_kurus / 10;
	toplam_kurus = toplam_kurus % 10;
	
	//5kurus 
	sayi5kurus = toplam_kurus / 5;
	toplam_kurus = toplam_kurus % 5;
	
	//1kurus
	sayi1kurus = toplam_kurus / 1;
	toplam_kurus = toplam_kurus % 1;
	
	printf("\n---banknot sayisi---\n");
	printf("200TL : %d\n",sayi200TL );
	printf("100TL : %d\n",sayi100TL );
	printf("50TL  : %d\n",sayi50TL );
	printf("20TL  : %d\n",sayi20TL );
	printf("10TL  : %d\n",sayi10TL );
	printf("5TL   : %d\n",sayi5TL );
	printf("1TL   : %d\n",sayi1TL );
	printf("50kurus : %d\n",sayi50kurus );
	printf("25kurus : %d\n",sayi25kurus );
	printf("10kurus : %d\n",sayi10kurus );
	printf("5kurus  : %d\n",sayi5kurus );
	printf("1kurus  : %d\n",sayi1kurus );
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	



	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
