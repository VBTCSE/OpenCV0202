// OpenCV0204

// The purpose of this program is to display a color image
// and its gray scale equivalent.

// Correct usage: OpenCV0204.exe color_image_filename gray_image_filename
//		where color_image_filename is the name of an existing file
//		and gray_image_filename is the name of a file that will be output,
//		created by this program.



// Refer to http://docs.opencv.org/master for relevant documentation.


#include <opencv2\opencv.hpp>
#include <iostream>

using namespace cv;
using namespace std;

int main(int argc, char** argv)
{
	//-------------------------------------------------------------------------
	// Test whether the number of arguments (argc) is not equal to 3.
	// If it is not equal to 3, output a message showing what the correct
	// usage of this program is, then pause for the user response and return -1.
	//-------------------------------------------------------------------------

#pragma message ("*** add code ***")	// TODO: add your code here.  Replace this line with your code







	//-------------------------------------------------------------------------
	// Declare char* (c-strings) to hold the two image filenames.
	//-------------------------------------------------------------------------

	char* imageNameColor = argv[1];	// input file
	char* imageNameGray = argv[2];	// output file







	//-------------------------------------------------------------------------
	// Declare a Mat object to contain the image.
	//-------------------------------------------------------------------------

	Mat image;







	//-------------------------------------------------------------------------
	// Use the imread function to read in a color image from a file 
	// whose name is in imageNameColor.  Store the image in the Mat object allocated
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
	// Declare a second Mat object to contain the output gray-scale image.
	//-------------------------------------------------------------------------

	Mat gray_image;







	//-------------------------------------------------------------------------
	// Use the cvtColor function to convert from the color image to the gray-
	// scale image.
	//-------------------------------------------------------------------------

#pragma message ("*** add code ***")	// TODO: add your code here.  Replace this line with your code







	//-------------------------------------------------------------------------
	// Use the imwrite function to write the gray-scale image into the output
	// image file.
	//-------------------------------------------------------------------------

#pragma message ("*** add code ***")	// TODO: add your code here.  Replace this line with your code







	//-------------------------------------------------------------------------
	// Use the namedWindow function to create a window for displaying the color
	// image.
	//-------------------------------------------------------------------------

#pragma message ("*** add code ***")	// TODO: add your code here.  Replace this line with your code







	//-------------------------------------------------------------------------
	// Use the imshow function to display the color image in the window that was 
	// created above.
	//-------------------------------------------------------------------------

#pragma message ("*** add code ***")	// TODO: add your code here.  Replace this line with your code







	//-------------------------------------------------------------------------
	// Use the namedWindow function to create a window for displaying the
	// gray-scale image.
	//-------------------------------------------------------------------------

#pragma message ("*** add code ***")	// TODO: add your code here.  Replace this line with your code







	//-------------------------------------------------------------------------
	// Use the imshow function to display the gray-scale image in the window 
	// that was created above.
	//-------------------------------------------------------------------------

#pragma message ("*** add code ***")	// TODO: add your code here.  Replace this line with your code







	//-------------------------------------------------------------------------
	// Use the waitKey function to wait until the user presses a key, in the 
	// image window.
	//-------------------------------------------------------------------------

#pragma message ("*** add code ***")	// TODO: add your code here.  Replace this line with your code







	return 0;
}