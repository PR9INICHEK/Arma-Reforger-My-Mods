modded class SCR_CampaignBuildingManagerComponent
{
	// [Attribute("5", UIWidgets.EditBox, "How many times player has to perform build step to gain a XP reward", "")]
	// protected int m_iXpRewardTreshold;

	//------------------------------------------------------------------------------------------------
	override void OnPostInit(IEntity owner)
	{
		//if (SCR_Global.IsEditMode())
			//return;

		// SetEventMask(owner, EntityEvent.INIT);
		
		super.OnPostInit(owner);
		
		//Print("SCR_CampaignBuildingManagerComponent::OnPostInit::m_iXpRewardTreshold = " + m_iXpRewardTreshold);
		
		if (m_iXpRewardTreshold)
			m_iXpRewardTreshold = 5;
	}

}