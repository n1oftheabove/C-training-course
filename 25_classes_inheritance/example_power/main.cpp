#include "strom.h"
#include "atomkraft.h"

int main(){

Atomkraft meiler1;
meiler1.setQuelle("Atomkraft");
meiler1.setKWh(1000);
meiler1.setCo2KWh(16);
meiler1.setCt4KWh(2.65);
meiler1.print();
system("pause");
return 0;
}