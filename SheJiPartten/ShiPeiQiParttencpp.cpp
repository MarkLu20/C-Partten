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
//	// 通过 AdvanceMediaPlayer 继承
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
//	// 通过 AdvanceMediaPlayer 继承
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
//	// 通过 MediaPlayer 继承
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
//	// 通过 MediaPlayer 继承
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
////适配器模式（Adapter Pattern）是作为两个@@不兼容的接口之间的桥梁@@。这种类型的设计模式属于结构型模式
//int main()
//{
//	AudioPlayer *audioplayer = new AudioPlayer();
//	audioplayer->Play("mp4", "fsdaf");
//	getchar();
//
//
//}
