class Folge{
	private:
		int *f;	//dynamisches Attribut, soll sp�ter Array mit beliebig
				// vielen Elementen werden. D.h. Speicher muss zur Laufzeit 
				// dynamisch geregelt werden. Wenn Speicher nicht mehr ben�tigt wird,
				//muss Destruktor speicher wieder frei machen
	public:
		Folge(int size){ //Konstruktor
			f= new int[size];
			}
		~Folge(){ //Destruktor
				delete [] f;		//[] weil f ein Array
			}
			
	