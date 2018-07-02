using namespace std;

class Point{
public:
	double x_coor;
	double y_coor;
	void output(){
		cout<<"x-coordinate: "<< x_coor <<endl;
		cout<<"y-coordinate: "<< y_coor <<endl;
		}
	double distance(Point p){
		return sqrt(pow((x_coor - p.x_coor),2)
			 + pow((y_coor - p.y_coor),2));
		}
};
