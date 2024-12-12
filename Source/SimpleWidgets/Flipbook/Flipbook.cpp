
#include "Flipbook.h"

#if WITH_EDITOR

void UFlipbook::AddKeyFrame(UPaperSprite* Sprite, int32 FrameRun)
{
	FPaperFlipbookKeyFrame newFrame;
	newFrame.Sprite = Sprite;
	newFrame.FrameRun = FrameRun;
	KeyFrames.Emplace(newFrame);
}

void UFlipbook::ClearKeyFrames()
{
	KeyFrames.Empty();
}

void UFlipbook::SetFramesPerSecond(float Frame)
{
	FramesPerSecond = Frame;
}

#endif