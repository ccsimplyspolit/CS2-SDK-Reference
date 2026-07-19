#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CBaseModifier.hpp"
#include "source2sdk/client/CitadelAbilityVData.hpp"

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
        // Size: 0x1838
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CBaseLockonAbilityVData : public source2sdk::client::CitadelAbilityVData
        {
        public:
            // metadata: MPropertyStartGroup "Modifiers"
            // m_TargetModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::client::CBaseModifier> m_TargetModifier;
            char m_TargetModifier[0x10]; // 0x1818            
            // metadata: MPropertyStartGroup "Sounds"
            CSoundEventName m_strApplyLockonStack; // 0x1828            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CBaseLockonAbilityVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CBaseLockonAbilityVData) == 0x1838);
    };
};
