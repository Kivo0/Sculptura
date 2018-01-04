#ifndef CAMERAPREVIEW_H
#define CAMERAPREVIEW_H

#include <QThread>
#include <QMutex>
#include <QWaitCondition>
#include <QImage>

#include <opencv2/core/core.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/highgui/highgui.hpp>

//using namespace cv;

class CameraPreview : public QThread
{
    Q_OBJECT

private:
    cv::VideoCapture capture;
    std::vector<cv::Mat> colors;
    cv::Mat frame;
    QImage frameImage;
    QSize frameImageSize;
    bool recording;
    bool stopped;
    QMutex mutex;
    QWaitCondition condition;

signals:
      void frameReady(const QImage &frame);
      void
      depthAndColorsReady(std::vector<cv::Mat> depth, std::vector<cv::Mat> colors);

protected:
     void run();

public:
    CameraPreview(QObject *parent = 0);
    ~CameraPreview();

    void startPreview(QSize previewSize);
    void stopPreview();
    bool isStopped() const;

    void startRecording();
    void stopRecording();
    bool isRecording() const;
};

#endif // CAMERAPREVIEW_H
