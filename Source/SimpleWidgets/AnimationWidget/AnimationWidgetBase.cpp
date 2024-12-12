
#include "AnimationWidgetBase.h"

void UAnimationWidgetBase::NativeConstruct()
{
	Super::NativeConstruct();

	if (AutoStart)
	{
		Play();
	}
}


void UAnimationWidgetBase::NativeDestruct()
{
	Stop();

	Super::NativeDestruct();
}

