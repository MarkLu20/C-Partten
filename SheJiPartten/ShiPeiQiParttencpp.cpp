//#include "stdio.h"
//#include "iostream"
//#include "list"
//#include "string"
//#include "vector"
//#include "stdlib.h"
//using namespace std;
//class MediaPlayer
//{
//
//public:
//	virtual void Play(string audioType, string fileName) = 0;
//
//
//
//};
//class AdvanceMediaPlayer
//{
//public:
//	virtual void playV1c(string fileName) = 0;
//
//
//	virtual  void playMp4(string fileName) = 0;
//
//
//
//};
//class VlcPlayer :public AdvanceMediaPlayer
//{
//
//
//
//
//public:
//	// ͨ�� AdvanceMediaPlayer �̳�
//	virtual void playV1c(string fileName) override
//	{
//		printf_s("PlayV1c");
//	}
//
//	virtual void playMp4(string fileName) override
//	{
//	}
//
//};
//class Mp4MediaPlayer :public AdvanceMediaPlayer
//{
//	// ͨ�� AdvanceMediaPlayer �̳�
//	virtual void playV1c(string fileName) override
//	{
//	}
//	virtual void playMp4(string fileName) override
//	{
//		printf_s("PlayMp4");
//	}
//};
//class MediaAdapter : public MediaPlayer
//{
//
//	AdvanceMediaPlayer *advanceMediaPlayer;
//public:
//	MediaAdapter(string audioType)
//	{
//		if (audioType == "vlc")
//		{
//			advanceMediaPlayer = new VlcPlayer();
//		}
//		else if (audioType == "mp4")
//		{
//			advanceMediaPlayer = new Mp4MediaPlayer();
//		}
//	}
//
//
//	// ͨ�� MediaPlayer �̳�
//	virtual void Play(string audioType, string fileName) override
//	{
//		if (audioType == "vlc")
//		{
//			printf_s("vlc");
//		}
//		else if (audioType == "mp4")
//		{
//			printf_s("mp4");
//
//		}
//
//	}
//
//};
//class AudioPlayer :public MediaPlayer
//{
//	MediaAdapter *mediaAdapter;
//
//
//public:
//	// ͨ�� MediaPlayer �̳�
//	virtual void Play(string audioType, string fileName) override
//	{
//		if (audioType == "mp4" || audioType == "vlc")
//		{
//			mediaAdapter = new MediaAdapter(audioType);
//			mediaAdapter->Play(audioType, fileName);
//		}
//	}
//
//};
//
//
////������ģʽ��Adapter Pattern������Ϊ����@@�����ݵĽӿ�֮�������@@���������͵����ģʽ���ڽṹ��ģʽ
//int main()
//{
//	AudioPlayer *audioplayer = new AudioPlayer();
//	audioplayer->Play("mp4", "fsdaf");
//	getchar();
//
//
//}
