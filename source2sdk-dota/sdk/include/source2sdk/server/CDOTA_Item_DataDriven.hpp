#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CDOTA_Item.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x708
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CDOTA_Item_DataDriven : public source2sdk::server::CDOTA_Item
        {
        public:
            uint8_t _pad0658[0x18]; // 0x658
            bool m_bProcsMagicStick; // 0x670            
            bool m_bIsSharedWithTeammates; // 0x671            
            bool m_bCastFilterRejectCaster; // 0x672            
            uint8_t _pad0673[0x1]; // 0x673
            float m_fAnimationPlaybackRate; // 0x674            
            float m_fAOERadius; // 0x678            
            uint8_t _pad067c[0x4]; // 0x67c
            // m_ModifierKVDescriptions has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<KeyValues*> m_ModifierKVDescriptions;
            char m_ModifierKVDescriptions[0x18]; // 0x680            
            KeyValues* m_pOnChannelFinishKV; // 0x698            
            KeyValues* m_pOnChannelSucceededKV; // 0x6a0            
            KeyValues* m_pOnChannelInterruptedKV; // 0x6a8            
            KeyValues* m_pOnOwnerSpawnedKV; // 0x6b0            
            KeyValues* m_pOnOwnerDiedKV; // 0x6b8            
            KeyValues* m_pOnProjectileHitUnitKV; // 0x6c0            
            KeyValues* m_pOnProjectileFinishKV; // 0x6c8            
            KeyValues* m_pOnSpellStartKV; // 0x6d0            
            KeyValues* m_pOnAbilityPhaseStartKV; // 0x6d8            
            KeyValues* m_pOnToggleOnKV; // 0x6e0            
            KeyValues* m_pOnToggleOffKV; // 0x6e8            
            KeyValues* m_pOnEquipKV; // 0x6f0            
            KeyValues* m_pOnUnequipKV; // 0x6f8            
            KeyValues* m_pOnCreatedKV; // 0x700            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Item_DataDriven because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Item_DataDriven) == 0x708);
    };
};
