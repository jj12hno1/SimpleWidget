#pragma once
#include "CoreMinimal.h"
#include "AnimationWidgetBase.h"
#include "Curves/CurveFloat.h"
#include "Components/TimelineComponent.h"
#include "TimelineAnimationWidget.generated.h"


UCLASS(Blueprintable)
class SIMPLEWIDGETS_API UTimelineAnimationWidget : public UAnimationWidgetBase
{
	GENERATED_BODY()

public:
	virtual bool Initialize() override;
	virtual void NativeConstruct() override;
	virtual void NativeDestruct() override;
	virtual void NativeTick(const FGeometry& MyGeometry, float InDeltaTime) override;

	virtual bool IsPlaying() override;
	virtual void Play(float startTime = 0.f, bool bReserve = false) override;
	virtual void Stop() override;
public:
	UPROPERTY(EditAnywhere)
	UCurveFloat* Curve = nullptr;

protected:
	UFUNCTION(BlueprintImplementableEvent)
	void TimeLineTick(float value);

	UFUNCTION(BlueprintImplementableEvent)
	void TimeLineFinished();

protected:
	UPROPERTY()
	FTimeline timeLine;
	UPROPERTY()
	FOnTimelineFloat timelineEvent;
};
