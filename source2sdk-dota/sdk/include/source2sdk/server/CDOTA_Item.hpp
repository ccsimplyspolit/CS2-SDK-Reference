#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/AbilityID_t.hpp"
#include "source2sdk/client/PlayerID_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CDOTABaseAbility.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CDOTA_Item_Physical;
    };
};

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: unknown
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x658
        // Has VTable
        // Is Abstract
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CDOTA_Item : public source2sdk::server::CDOTABaseAbility
        {
        public:
            std::int32_t m_iState; // 0x580            
            std::int32_t m_CastAnimation; // 0x584            
            bool m_bCombinable; // 0x588            
            bool m_bPermanent; // 0x589            
            bool m_bStackable; // 0x58a            
            uint8_t _pad058b[0x1]; // 0x58b
            std::int32_t m_iStackableMax; // 0x58c            
            bool m_bRecipe; // 0x590            
            bool m_bRecipeConsumesCharges; // 0x591            
            uint8_t _pad0592[0x2]; // 0x592
            std::int32_t m_iSharability; // 0x594            
            bool m_bDroppable; // 0x598            
            bool m_bPurchasable; // 0x599            
            bool m_bSellable; // 0x59a            
            bool m_bInitiallySellable; // 0x59b            
            bool m_bForceUnsellable; // 0x59c            
            bool m_bRequiresCharges; // 0x59d            
            bool m_bKillable; // 0x59e            
            bool m_bGloballyCombinable; // 0x59f            
            bool m_bDisassemblable; // 0x5a0            
            bool m_bNeverDisassemble; // 0x5a1            
            bool m_bIsTempestDoubleClonable; // 0x5a2            
            bool m_bIsNeutralActiveDrop; // 0x5a3            
            bool m_bIsNeutralPassiveDrop; // 0x5a4            
            uint8_t _pad05a5[0x3]; // 0x5a5
            std::int32_t m_nNeutralDropTeam; // 0x5a8            
            bool m_bAlertable; // 0x5ac            
            uint8_t _pad05ad[0x3]; // 0x5ad
            std::int32_t m_iInitialCharges; // 0x5b0            
            bool m_bCastOnPickup; // 0x5b4            
            bool m_bOnlyPlayerHeroPickup; // 0x5b5            
            bool m_bCreepHeroPickup; // 0x5b6            
            bool m_bCanBeUsedOutOfInventory; // 0x5b7            
            bool m_bItemEnabled; // 0x5b8            
            uint8_t _pad05b9[0x3]; // 0x5b9
            source2sdk::entity2::GameTime_t m_flEnableTime; // 0x5bc            
            source2sdk::entity2::GameTime_t m_flReclaimTime; // 0x5c0            
            bool m_bCanBeConsumed; // 0x5c4            
            bool m_bCanPutIntoSatchel; // 0x5c5            
            bool m_bDisableStacking; // 0x5c6            
            bool m_bDisplayOwnership; // 0x5c7            
            bool m_bShowOnMinimap; // 0x5c8            
            uint8_t _pad05c9[0x3]; // 0x5c9
            float m_flMinimapIconSize; // 0x5cc            
            bool m_bShowDroppedItemTooltip; // 0x5d0            
            bool m_bIsUpgradeable; // 0x5d1            
            uint8_t _pad05d2[0x2]; // 0x5d2
            std::int32_t m_nUpgradeProgress; // 0x5d4            
            std::int32_t m_nUpgradeGoal; // 0x5d8            
            uint8_t _pad05dc[0x4]; // 0x5dc
            // m_vecPreGameTransferPlayerIDs has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CNetworkUtlVectorBase<std::uint8_t> m_vecPreGameTransferPlayerIDs;
            char m_vecPreGameTransferPlayerIDs[0x18]; // 0x5e0            
            bool m_bStackWithOtherOwners; // 0x5f8            
            bool m_bTemporarilyUncombinable; // 0x5f9            
            bool m_bHasCommentedOnEquip; // 0x5fa            
            uint8_t _pad05fb[0x1]; // 0x5fb
            std::int32_t m_iDeclarationFlags; // 0x5fc            
            bool m_bCreatedByDisassemble; // 0x600            
            bool m_bHasMixedOwnership; // 0x601            
            bool m_bIsClonedItemProxy; // 0x602            
            bool m_bNeutralItemRequestDrop; // 0x603            
            source2sdk::entity2::GameTime_t m_flPurchaseTime; // 0x604            
            source2sdk::entity2::GameTime_t m_flAssembledTime; // 0x608            
            std::int32_t m_iCurrentCharges; // 0x60c            
            std::int32_t m_iValuelessCharges; // 0x610            
            std::int32_t m_iSecondaryCharges; // 0x614            
            bool m_bCombineLocked; // 0x618            
            bool m_bMarkForSell; // 0x619            
            uint8_t _pad061a[0x2]; // 0x61a
            // m_hContainer has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CDOTA_Item_Physical> m_hContainer;
            char m_hContainer[0x4]; // 0x61c            
            source2sdk::client::PlayerID_t m_iPlayerOwnerID; // 0x620            
            source2sdk::client::AbilityID_t m_nImbuedAbility; // 0x624            
            bool m_bPurchasedWhileDead; // 0x628            
            uint8_t _pad0629[0x3]; // 0x629
            std::int32_t m_nCombineVersion; // 0x62c            
            uint8_t _pad0630[0x28];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Item because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Item) == 0x658);
    };
};
