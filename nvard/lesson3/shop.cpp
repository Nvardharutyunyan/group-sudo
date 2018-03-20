#include <iostream>
int main()
{
	float  snikers_count=2;
	float hamburger_count=2;
	float cola_count=2;
	float panda_count=0.5;
 	float roshen_count=0.2;
 	float wather_litr=4;
	float bread_count=4;
	float  juise_litr=2;
	float  tablecloth_metr=3.5;
	 float  snikers_price=1.5; 
        float hamburger_price=2.6; 
        float cola_price=1.2;
        float panda_price=6;
        float roshen_price=13; 
        float wather_price=3.3; 
        float bread_price=0.3; 
        float  juise_price=10; 
        float  tablecloth_price=2.5;
	double sum=snikers_count*snikers_price+hamburger_count*hamburger_price+cola_count*cola_price+panda_count*panda_price+roshen_count*roshen_price+wather_litr*wather_price+bread_count*bread_price+
juise_litr*juise_price+tablecloth_metr*tablecloth_price;
std::cout << "Your sum = " << sum <<std::endl;

return 0;
} 
