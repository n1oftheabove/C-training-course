class Punkt{
private:
	int px, py;
	static int n; //Speichert die Anzahl der existierenden Objekte in statischer Variable n
public:
	Punkt(){
	n++;		//immer wenn Konstruktor aufgerufen wird, wird n erhöht
	cout << "Anzahl der Objekte "<<n<<endl;
	}
	~Punkt(){
	n--;		//immer wenn Destruktor aufgerufen wird, wird n um 1 erniedrigt
	cout<< "Anzahl der Objekte: " << endl;
	}
	
	void setPunkt(int x, int y);
	void ausgeben();
};

int Punkt::n = 0;			//Definition des statischen Elemts und Initialisierung
void Punkt::setPunkt(int x, int y){
	px = x; py = y;
}

void Punkt::ausgeben()
{
	cout << n << ".Punkt - (" << px << " , " << py << ")" << endl;
}
int main(void){
	{
		class Punkt a;	//1. Konstruktoraufruf
		a.setPunkt(0,0);
		a.ausgeben();
		{
					class Punkt b;	//2. Konstruktoraufruf
					b.setPunkt(-1,10);
					b.ausgeben();
						{
							class Punkt c; //3. Konstruktoraufruf
							c.setPunkt(4,30);
							c.ausgeben();
						}//hier endet Leben von c
				}//hier endet Leben von b
		}//hier endet leben von a
}
