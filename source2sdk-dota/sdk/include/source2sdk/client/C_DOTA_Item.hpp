#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/AbilityID_t.hpp"
#include "source2sdk/client/C_DOTABaseAbility.hpp"
#include "source2sdk/client/PlayerID_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
namespace source2sdk
{
    namespace client
    {
        struct C_BaseEntity;
    };
};

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: unknown
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x758
        // Has VTable
        // Is Abstract
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class C_DOTA_Item : public source2sdk::client::C_DOTABaseAbility
        {
        public:
            std::int32_t m_CastAnimation; // 0x6a8            
            bool m_bCombinable; // 0x6ac            
            bool m_bPermanent; // 0x6ad            
            bool m_bStackable; // 0x6ae            
            uint8_t _pad06af[0x1]; // 0x6af
            std::int32_t m_iStackableMax; // 0x6b0            
            bool m_bRecipe; // 0x6b4            
            bool m_bRecipeConsumesCharges; // 0x6b5            
            uint8_t _pad06b6[0x2]; // 0x6b6
            std::int32_t m_iSharability; // 0x6b8            
            bool m_bDroppable; // 0x6bc            
            bool m_bPurchasable; // 0x6bd            
            bool m_bSellable; // 0x6be            
            bool m_bInitiallySellable; // 0x6bf            
            bool m_bForceUnsellable; // 0x6c0            
            bool m_bRequiresCharges; // 0x6c1            
            bool m_bDisplayCharges; // 0x6c2            
            bool m_bHideCharges; // 0x6c3            
            bool m_bKillable; // 0x6c4            
            bool m_bGloballyCombinable; // 0x6c5            
            bool m_bDisassemblable; // 0x6c6            
            bool m_bNeverDisassemble; // 0x6c7            
            bool m_bIsNeutralActiveDrop; // 0x6c8            
            bool m_bIsNeutralPassiveDrop; // 0x6c9            
            uint8_t _pad06ca[0x2]; // 0x6ca
            std::int32_t m_nNeutralDropTeam; // 0x6cc            
            bool m_bAlertable; // 0x6d0            
            uint8_t _pad06d1[0x3]; // 0x6d1
            std::int32_t m_iInitialCharges; // 0x6d4            
            bool m_bCastOnPickup; // 0x6d8            
            bool m_bOnlyPlayerHeroPickup; // 0x6d9            
            bool m_bCreepHeroPickup; // 0x6da            
            bool m_bCanBeConsumed; // 0x6db            
            std::int32_t m_iValuelessCharges; // 0x6dc            
            std::int32_t m_iCurrentCharges; // 0x6e0            
            std::int32_t m_iSecondaryCharges; // 0x6e4            
            std::int32_t m_iMaxCharges; // 0x6e8            
            bool m_bCombineLocked; // 0x6ec            
            bool m_bMarkForSell; // 0x6ed            
            uint8_t _pad06ee[0x2]; // 0x6ee
            source2sdk::entity2::GameTime_t m_flPurchaseTime; // 0x6f0            
            source2sdk::entity2::GameTime_t m_flAssembledTime; // 0x6f4            
            bool m_bPurchasedWhileDead; // 0x6f8            
            bool m_bCanBeUsedOutOfInventory; // 0x6f9            
            bool m_bItemEnabled; // 0x6fa            
            uint8_t _pad06fb[0x1]; // 0x6fb
            source2sdk::entity2::GameTime_t m_flEnableTime; // 0x6fc            
            source2sdk::entity2::GameTime_t m_flReclaimTime; // 0x700            
            bool m_bDisplayOwnership; // 0x704            
            bool m_bShowOnMinimap; // 0x705            
            uint8_t _pad0706[0x2]; // 0x706
            float m_flMinimapIconSize; // 0x708            
            bool m_bIsUpgradeable; // 0x70c            
            uint8_t _pad070d[0x3]; // 0x70d
            std::int32_t m_nUpgradeProgress; // 0x710            
            std::int32_t m_nUpgradeGoal; // 0x714            
            bool m_bShowDroppedItemTooltip; // 0x718            
            uint8_t _pad0719[0x3]; // 0x719
            // m_hOldOwnerEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hOldOwnerEntity;
            char m_hOldOwnerEntity[0x4]; // 0x71c            
            std::int32_t m_iOldCharges; // 0x720            
            source2sdk::client::PlayerID_t m_iPlayerOwnerID; // 0x724            
            source2sdk::client::AbilityID_t m_nImbuedAbility; // 0x728            
            uint8_t _pad072c[0x4]; // 0x72c
            // m_vecPreGameTransferPlayerIDs has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // C_NetworkUtlVectorBase<std::uint8_t> m_vecPreGameTransferPlayerIDs;
            char m_vecPreGameTransferPlayerIDs[0x18]; // 0x730            
            uint8_t _pad0748[0x8]; // 0x748
            bool m_bShowActivateToUseAnimation; // 0x750            
            uint8_t _pad0751[0x7];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_DOTA_Item because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_DOTA_Item) == 0x758);
    };
};
