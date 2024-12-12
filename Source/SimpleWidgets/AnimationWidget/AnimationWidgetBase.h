#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "AnimationWidgetBase.generated.h"


/**
* 可复用 UI Animation 的 UserWidget
*/


UCLASS(Blueprintable)
class SIMPLEWIDGETS_API UAnimationWidgetBase : public UUserWidget
{
	GENERATED_BODY()

public:
	virtual void NativeConstruct() override;
	virtual void NativeDestruct() override;

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsLoop = false;

	UPROPERTY(EditAnywhere)
	bool AutoStart = true;

	UPROPERTY(EditAnywhere)
	float AnimationTime = 0.f;

public:
	UFUNCTION(BlueprintPure)
	virtual bool IsPlaying() { return false; }

	UFUNCTION(BlueprintCallable)
	virtual void Play(float startTime = 0.f, bool bReserve = false) {}

	UFUNCTION(BlueprintCallable)
	virtual void Stop(){}
};
