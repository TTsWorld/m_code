#include <stdio.h>
//#ifdef __cplusplus
//extern "C" {
//#endif
 
#include <libavutil/avutil.h>
#include <libavcodec/avcodec.h>
#include <libavformat/avformat.h>
 
 
//#ifdef __cplusplus
//} // endof extern "C"
//#endif
 
 
//using namespace std;
 
 
int main()
{
	printf("Hello World!\n");
	av_register_all();
	return 0;
}
