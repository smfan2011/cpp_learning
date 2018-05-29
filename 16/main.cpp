#include "simplefactory.h"

int main(){
	AbstractFactory * factory = new SimpleFactory();
	AbstractProduct * product = factory->CreatProduct(1);
	product->operation();
	delete product;
	product = NULL;

	product = factory->CreatProduct(2);
	product->operation();
	delete product;
	product = NULL;
	return 0;
}
