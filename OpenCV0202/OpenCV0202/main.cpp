// OpenCV0202

// The purpose of this program is to display a color image.

// Correct usage: OpenCV0202.exe image_filename



// Refer to http://docs.opencv.org/master for relevant documentation.


#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <iostream>

using namespace cv;
using namespace std;

int main(int argc, char** argv)
{
	//-------------------------------------------------------------------------
	// Test whether the number of arguments (argc) is not equal to 2.
	// If it is not equal to 2, output a message showing what the correct
	// usage of this program is, then pause for the user response and return -1.
	//-------------------------------------------------------------------------

#pragma message ("*** add code ***")	// TODO: add your code here.  Replace this line with your code






	//-------------------------------------------------------------------------
	// Declare a Mat object to contain the image.
	//-------------------------------------------------------------------------

	Mat image;







	//-------------------------------------------------------------------------
	// Use the imread function to read in a color image from a file 
	// whose name is in argv[1].  Store the image in the Mat object allocated
	// above.
	//-------------------------------------------------------------------------

#pragma message ("*** add code ***")	// TODO: add your code here.  Replace this line with your code







	//-------------------------------------------------------------------------
	// Use the data attribute of the Mat class to test whether any data was
	// actually input.  If no data was input (file not found or could not be
	// read as an image), then output a message, wait for the user's response
	// and return -1.
	//-------------------------------------------------------------------------

#pragma message ("*** add code ***")	// TODO: add your code here.  Replace this line with your code







	//-------------------------------------------------------------------------
	// Use the namedWindow function to create a window for displaying the image.
	//-------------------------------------------------------------------------

#pragma message ("*** add code ***")	// TODO: add your code here.  Replace this line with your code







	//-------------------------------------------------------------------------
	// Use the imshow function to display the image in the window that was 
	// created above.
	//-------------------------------------------------------------------------

#pragma message ("*** add code ***")	// TODO: add your code here.  Replace this line with your code







	//-------------------------------------------------------------------------
	// Use the waitKey function to wait until the user presses a key, in the 
	// image window.
	//-------------------------------------------------------------------------

#pragma message ("*** add code ***")	// TODO: add your code here.  Replace this line with your code







	return 0;
}