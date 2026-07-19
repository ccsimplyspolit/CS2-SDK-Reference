#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CDOTABaseAbility.hpp"

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
        // Size: 0x630
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CDOTA_Ability_DataDriven : public source2sdk::server::CDOTABaseAbility
        {
        public:
            uint8_t _pad0580[0x18]; // 0x580
            bool m_bProcsMagicStick; // 0x598            
            bool m_bIsSharedWithTeammates; // 0x599            
            bool m_bCastFilterRejectCaster; // 0x59a            
            uint8_t _pad059b[0x1]; // 0x59b
            float m_fAOERadius; // 0x59c            
            std::int32_t m_CastAnimation; // 0x5a0            
            uint8_t _pad05a4[0x4]; // 0x5a4
            // m_ModifierKVDescriptions has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<KeyValues*> m_ModifierKVDescriptions;
            char m_ModifierKVDescriptions[0x18]; // 0x5a8            
            KeyValues* m_pOnChannelFinishKV; // 0x5c0            
            KeyValues* m_pOnChannelSucceededKV; // 0x5c8            
            KeyValues* m_pOnChannelInterruptedKV; // 0x5d0            
            KeyValues* m_pOnOwnerSpawnedKV; // 0x5d8            
            KeyValues* m_pOnOwnerDiedKV; // 0x5e0            
            KeyValues* m_pOnUpgradeKV; // 0x5e8            
            KeyValues* m_pOnProjectileHitUnitKV; // 0x5f0            
            KeyValues* m_pOnProjectileFinishKV; // 0x5f8            
            KeyValues* m_pOnSpellStartKV; // 0x600            
            KeyValues* m_pOnAbilityPhaseStartKV; // 0x608            
            KeyValues* m_pOnAbilityPhaseInterruptedKV; // 0x610            
            KeyValues* m_pOnToggleOnKV; // 0x618            
            KeyValues* m_pOnToggleOffKV; // 0x620            
            KeyValues* m_pOnCreatedKV; // 0x628            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Ability_DataDriven because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Ability_DataDriven) == 0x630);
    };
};
