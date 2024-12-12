#pragma once
#include "CoreMinimal.h"
#include "AnimationWidgetBase.h"
#include "Animation/WidgetAnimation.h"
#include "AnimationWidget.generated.h"


UCLASS(Blueprintable)
class SIMPLEWIDGETS_API UAnimationWidget : public UAnimationWidgetBase
{
	GENERATED_BODY()

public:
	virtual bool IsPlaying() override;
	virtual void Play(float startTime = 0.f, bool bReserve = false) override;
	virtual void Stop() override;
public:
	virtual void NativeConstruct() override;

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta = (BindWidgetAnimOptional))
	UWidgetAnimation* Animation_Bind = nullptr;

	UPROPERTY()
	float PlaybackSpeed = 1.f;
};