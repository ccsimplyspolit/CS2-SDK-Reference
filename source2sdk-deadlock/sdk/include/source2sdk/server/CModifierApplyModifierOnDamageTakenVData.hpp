#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/ECitadelDamageType.hpp"
#include "source2sdk/server/CBaseModifier.hpp"
#include "source2sdk/server/CCitadelModifierVData.hpp"

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
        // Size: 0x798
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CModifierApplyModifierOnDamageTakenVData : public source2sdk::server::CCitadelModifierVData
        {
        public:
            // metadata: MPropertyGroupName "OnDamage Settings"
            // metadata: MPropertyDescription "What types of damage do we apply modifiers for?"
            // m_vecDamageTypes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::ECitadelDamageType> m_vecDamageTypes;
            char m_vecDamageTypes[0x18]; // 0x750            
            // metadata: MPropertyStartGroup "Target Modifier"
            // metadata: MPropertyDescription "Modifier to apply to the target dealing damage, when owner takes damage."
            // m_TargetModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::server::CBaseModifier> m_TargetModifier;
            char m_TargetModifier[0x10]; // 0x768            
            // metadata: MPropertyDescription "AbilityPropVal to grab duration from."
            CUtlString m_TargetModifierDurationAbilityProp; // 0x778            
            // metadata: MPropertyStartGroup "Self Modifier"
            // metadata: MPropertyDescription "Modifier to apply to the owner, when owner takes damage."
            // m_SelfModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::server::CBaseModifier> m_SelfModifier;
            char m_SelfModifier[0x10]; // 0x780            
            // metadata: MPropertyDescription "AbilityPropVal to grab duration from."
            CUtlString m_SelfModifierDurationAbilityProp; // 0x790            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CModifierApplyModifierOnDamageTakenVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CModifierApplyModifierOnDamageTakenVData) == 0x798);
    };
};
