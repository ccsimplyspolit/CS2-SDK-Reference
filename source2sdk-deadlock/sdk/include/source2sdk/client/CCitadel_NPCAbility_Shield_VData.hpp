#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
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
        // Size: 0x1820
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CCitadel_NPCAbility_Shield_VData : public source2sdk::client::CitadelAbilityVData
        {
        public:
            // metadata: MPropertyStartGroup "Gameplay"
            float m_flShieldOffset; // 0x1818            
            float m_flShieldScale; // 0x181c            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_NPCAbility_Shield_VData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_NPCAbility_Shield_VData) == 0x1820);
    };
};
