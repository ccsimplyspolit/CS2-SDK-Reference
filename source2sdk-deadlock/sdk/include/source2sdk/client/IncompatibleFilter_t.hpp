#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/EAbilityActivation_t.hpp"
#include "source2sdk/client/EAbilityBehavior_t.hpp"
#include "source2sdk/client/EAbilityType_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x4
        // Alignment: 0x4
        // Standard-layout class: true
        // Size: 0x14
        // Has Trivial Destructor
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct IncompatibleFilter_t
        {
        public:
            // m_AbilityBehaviorsBits has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CBitVecEnum<source2sdk::client::EAbilityBehavior_t> m_AbilityBehaviorsBits;
            char m_AbilityBehaviorsBits[0xc]; // 0x0            
            source2sdk::client::EAbilityActivation_t m_eAbilityActivation; // 0xc            
            source2sdk::client::EAbilityType_t m_eIncompatibleAbilityType; // 0x10            
            uint8_t _pad0011[0x3];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::IncompatibleFilter_t, m_AbilityBehaviorsBits) == 0x0);
        static_assert(offsetof(source2sdk::client::IncompatibleFilter_t, m_eAbilityActivation) == 0xc);
        static_assert(offsetof(source2sdk::client::IncompatibleFilter_t, m_eIncompatibleAbilityType) == 0x10);
        
        static_assert(sizeof(source2sdk::client::IncompatibleFilter_t) == 0x14);
    };
};
