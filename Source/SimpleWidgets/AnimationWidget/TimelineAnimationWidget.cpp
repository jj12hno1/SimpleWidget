
#include "TimelineAnimationWidget.h"

bool UTimelineAnimationWidget::Initialize()
{
	bool rt = Super::Initialize();

	timelineEvent.BindUFunction(this, TEXT("TimeLineTick"));

	FOnTimelineEvent finishEvent;
	finishEvent.BindUFunction(this, TEXT("TimeLineFinished"));
	timeLine.SetTimelineFinishedFunc(finishEvent);

	if (Curve != nullptr)
	{
		timeLine.AddInterpFloat(Curve, timelineEvent);
		float fMinTime, fMaxTime;
		Curve->FloatCurve.GetTimeRange(fMinTime, fMaxTime);
		timeLine.SetLooping(IsLoop);
		timeLine.SetTimelineLength(fMaxTime);

		float PlayRate = AnimationTime > 0.f ? fMaxTime / AnimationTime : 1.f;
		timeLine.SetPlayRate(PlayRate);
	}

	return rt;
}

void UTimelineAnimationWidget::NativeConstruct()
{
	Super::NativeConstruct();
}

void UTimelineAnimationWidget::NativeDestruct()
{
	Stop();

	Super::NativeDestruct();
}

void UTimelineAnimationWidget::NativeTick(const FGeometry& MyGeometry, float InDeltaTime)
{
	Super::NativeTick(MyGeometry, InDeltaTime);

	timeLine.TickTimeline(InDeltaTime);
}

void UTimelineAnimationWidget::Play(float startTime, bool bReserve)
{
	if (bReserve)
	{
		if (startTime > 0.f)
		{
			timeLine.SetNewTime(startTime);
			timeLine.Reverse();
		}
		else
		{
			timeLine.ReverseFromEnd();
		}
	}
	else
	{
		timeLine.SetNewTime(startTime);
		timeLine.Play();
	}
	
}

void UTimelineAnimationWidget::Stop()
{
	timeLine.Stop();
}

bool UTimelineAnimationWidget::IsPlaying()
{
	return timeLine.IsPlaying();
}


