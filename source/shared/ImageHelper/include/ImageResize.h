#ifndef _Image_Resize_h_
#define _Image_Resize_h_

#ifdef __cplusplus
extern "C"
{
#endif

    /**
      * @brief ��unsigned char�������͵�ͼ������ٽ���ֵ
      * @param srcImage: ����unsigned char�������͵�ͼ��
      * @param destImage: �ٽ���ֵ�������unsigned char�������͵�ͼ��
      * @param srcW: ����ͼ��Ŀ�
      * @param srcH: ����ͼ��ĸ�
      * @param destW: ���ͼ��Ŀ�
      * @param destH: ���ͼ��ĸ�
      * @param channels: ͼ���ά��
      * @return: 0
      */
    int ImageResize(unsigned char * srcImage, unsigned char * destImage, int srcW, int srcH, int destW, int destH, int channels);

    /**
      * @brief ��������Ϊ1280
      * @param width: ����Ŀ�
      * @param height: ����ĸ�
      * @param owidth: ���ͼ��Ŀ�
      * @param srcH: ���ͼ��ĸ�
      * @param platform: ƽ̨0:android   ����windows
      * @return: 0
      */
    int getSystemImageSize(int width, int height, int* owidth, int* oheight, int platform);
#ifdef __cplusplus
}
#endif

#endif