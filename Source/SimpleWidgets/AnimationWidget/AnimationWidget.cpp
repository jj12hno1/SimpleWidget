
#include "AnimationWidget.h"
#include "MovieScene.h"

void UAnimationWidget::NativeConstruct()
{
	check(Animation_Bind != nullptr);

	float endTime = Animation_Bind->GetEndTime();
	PlaybackSpeed = AnimationTime > 0.f ? endTime / AnimationTime : 1.f;

	Super::NativeConstruct();
}

bool UAnimationWidget::IsPlaying()
{
	return IsAnimationPlaying(Animation_Bind);
}

void UAnimationWidget::Play(float startTime, bool bReserve)
{
	EUMGSequencePlayMode::Type playMode = bReserve ? EUMGSequencePlayMode::Reverse
		: EUMGSequencePlayMode::Forward;
	PlayAnimation(Animation_Bind, startTime, IsLoop ? 0 : 1, playMode, PlaybackSpeed);
}

void UAnimationWidget::Stop()
{
	StopAnimation(Animation_Bind);
}
