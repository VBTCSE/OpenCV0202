// OpenCV0203

// The purpose of this program is to display a video.

// Correct usage: OpenCV0203.exe video_filename



// Refer to http://docs.opencv.org/master for relevant documentation.


#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <iostream>

using namespace std;
using namespace cv;

int main(int argc, char** argv)
{
	//-------------------------------------------------------------------------
	// Test whether the number of arguments (argc) is not equal to 2.
	// If it is not equal to 2, output a message showing what the correct
	// usage of this program is, then pause for the user response and return -1.
	//-------------------------------------------------------------------------

#pragma message ("*** add code ***")	// TODO: add your code here.  Replace this line with your code







	//-------------------------------------------------------------------------
	// Declare a VideoCapture object to provide the video input stream.
	//-------------------------------------------------------------------------

	VideoCapture cap;







	//-------------------------------------------------------------------------
	// Use the open function of the VideoCapture class to open the video
	// from a file whose name is in arg[1]
	//-------------------------------------------------------------------------

#pragma message ("*** add code ***")	// TODO: add your code here.  Replace this line with your code







	//-------------------------------------------------------------------------
	// Declare a Mat object to contain the image of each frame from the video
	// input stream.
	//-------------------------------------------------------------------------

	Mat frame;







	//-------------------------------------------------------------------------
	// Use the namedWindow function to create a window for displaying the video.
	//-------------------------------------------------------------------------

#pragma message ("*** add code ***")	// TODO: add your code here.  Replace this line with your code







	//-------------------------------------------------------------------------
	// Use a "forever" loop to step through each frame of the video file.
	//-------------------------------------------------------------------------

	for (;;)
	{

		//-------------------------------------------------------------------------
		// Use the extraction operator (>>) to input one frame from the video stream
		// (the VideoCapture object allocated above), into the image (the Mat object
		// allocated above).
		//-------------------------------------------------------------------------

#pragma message ("*** add code ***")	// TODO: add your code here.  Replace this line with your code







		//-------------------------------------------------------------------------
		// Use the empty function of the Mat class to test whether the frame is
		// empty (ran out of frames, reached the end of the video.  If this has happened,
		// then break out of the "forever" loop.
		//-------------------------------------------------------------------------

#pragma message ("*** add code ***")	// TODO: add your code here.  Replace this line with your code







		//-------------------------------------------------------------------------
		// Use the imshow function to display the image of this single video frame
		// in the window that was created above.
		//-------------------------------------------------------------------------

#pragma message ("*** add code ***")	// TODO: add your code here.  Replace this line with your code







		//-------------------------------------------------------------------------
		// Use the waitKey function to wait 33 milliseconds, or until the user 
		// presses a key, in the video window.  Use the return value of waitKey
		// to determine whether a key was pressed by the user.  If a key was pressed,
		// break out of the "forever" loop, ending the program.
		//-------------------------------------------------------------------------

#pragma message ("*** add code ***")	// TODO: add your code here.  Replace this line with your code


	}







	return 0;
}