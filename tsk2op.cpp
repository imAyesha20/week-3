#include <iostream>
using namespace std;

int main()
{
 int minutes,fps;  
 cout << "Enter video length in minutes: ";
 cin >> minutes;
 cout << "Enter frames per second (FPS): ";
 cin >> fps;  
 int totalFrames = minutes * 60 * fps; 
 cout << "Total number of frames = " << totalFrames << endl;
}