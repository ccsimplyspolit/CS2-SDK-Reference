#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CCitadelModifierVData.hpp"
#include "source2sdk/client/CITADEL_UNIT_TARGET_FLAGS.hpp"
#include "source2sdk/client/CITADEL_UNIT_TARGET_TYPE.hpp"
#include "source2sdk/client/ECitadelDamageType.hpp"
#include "source2sdk/client/TakeDamageFlags_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x780
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CCitadel_Modifier_BaseEventProcVData : public source2sdk::client::CCitadelModifierVData
        {
        public:
            bool m_bProcChanceAffectedByEffectiveness; // 0x750            
            bool m_bShouldApplyAbilityCooldown; // 0x751            
            // metadata: MPropertySuppressExpr "m_bCanProcMultipleTimesFromSameShot != true"
            bool m_bCanProcMultipleTimesOnOneTarget; // 0x752            
            bool m_bCanProcByOtherObjects; // 0x753            
            source2sdk::client::CITADEL_UNIT_TARGET_TYPE m_nAbilityTargetTypes; // 0x754            
            source2sdk::client::CITADEL_UNIT_TARGET_FLAGS m_nAbilityTargetFlags; // 0x758            
            uint8_t _pad075c[0x4]; // 0x75c
            // m_vecProcDamageTypes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::ECitadelDamageType> m_vecProcDamageTypes;
            char m_vecProcDamageTypes[0x18]; // 0x760            
            source2sdk::client::TakeDamageFlags_t m_nRequiredDamageFlags; // 0x778            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Modifier_BaseEventProcVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Modifier_BaseEventProcVData) == 0x780);
    };
};
