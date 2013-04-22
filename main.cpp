# pragma comment(lib, "ws2_32.lib")
#include <stdio.h>
#include "vol_math_trilateralfilter.h"
#include "image.h"
#include <crtdbg.h> 



//using namespace std;


int main()
{
	int tmpFlag = _CrtSetDbgFlag( _CRTDBG_REPORT_FLAG );
	tmpFlag |= _CRTDBG_LEAK_CHECK_DF; 
	_CrtSetDbgFlag( tmpFlag ); 
	image *img=new image(281,481,2501);
	img->readImage(img->buf,"F:\\lab\\VTKproj\\mig.raw",img->getlength());
	//img->readImage(img->buf,"E:\\mig.vol",img->getlength());
	//Raw2D * raw2d1=new Raw2D(281,481,img->buf2float(img->buf));
	//Raw2D *raw2d;//=new Raw2D();
	//raw2d=rawarray(281,481,2501,img->buf2float(img->buf));
	rawarray(281,481,2501,img->buf);
	delete img;
	//raw2d[0]->TrilateralFilter(raw2d[0],1.0);
	//Raw3D *raw3d=new Raw3D(2501,raw2d);
	//raw3d->sizer(281,481,2501);
	//raw3d->wipecopy(raw3d);
	//raw2d1->put(1,2,3.0f);
	//raw2d2->put(1,1,4.0f);
	//raw2d1->ComputeGradients(raw2d1,raw2d2);

	system("pause");

}