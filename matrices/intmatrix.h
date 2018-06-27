class IntMatrix{
	private:
		int zeile;
		int spalte;
		int mat[][];
	public:
		IntMatrix();
		IntMatrix(int, int);
		int getA();
		int getB();
		void setA(int);
		void setB(int);
		void println(IntMatrix);
		int get(int, int);
		IntMatrix getRandomMatrix(int, int, int);
		bool equals(IntMatrix);
}
