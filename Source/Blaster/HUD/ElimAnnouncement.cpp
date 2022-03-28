// Fill out your copyright notice in the Description page of Project Settings.


#include "ElimAnnouncement.h"
#include "Components/TextBlock.h"

void UElimAnnouncement::SetElimAnnouncementText(FString AttackerName, FString VictimName)
{
	FString ElimAnnouncementText = FString::Printf(TEXT("%s elimmed %s!"), *AttackerName, *VictimName);
	if (AnnouncementText)
	{
		AnnouncementText->SetText(FText::FromString(ElimAnnouncementText));
	}
}