#pragma once

#include "ofMain.h"

class Furiko {
public:
	Furiko();
	double a=0;//â¡ë¨ìx
	double v=0;//äpë¨ìx
	double Theta;//äpìx
	double Theta0;//èâä˙äpìx
	double Length;//í∑Ç≥
	double g = 9.8;//èdóÕäpë¨ìx
	double M_PI = 3.14159265359;
	int beforetime = 0;
	double Dtime;

	void setup(double length,double theta0);
	void caltheta(int time);

};
class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void mouseEntered(int x, int y);
		void mouseExited(int x, int y);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
		ofColor calcolor(double digree,double max);
		double calLength(double time, double theta);
		double M_PI = 3.14159265359;
		vector<Furiko> Furikos;
		ofEasyCam cam;

		bool start = false;
};
