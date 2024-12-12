// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "../../../../Plugins/2D/Paper2D/Source/Paper2D/Classes/PaperFlipbook.h"
#include "Flipbook.generated.h"
/**
 * 
 */
UCLASS(Blueprintable)
class SIMPLEWIDGETS_API UFlipbook : public UPaperFlipbook
{
	GENERATED_BODY()

public:
#if WITH_EDITORONLY_DATA
	UFUNCTION(BlueprintCallable)
	void AddKeyFrame(UPaperSprite* Sprite, int32 FrameRun = 1);

	UFUNCTION(BlueprintCallable)
	void ClearKeyFrames();

	UFUNCTION(BlueprintCallable)
	void SetFramesPerSecond(float Frame);
#endif
};
