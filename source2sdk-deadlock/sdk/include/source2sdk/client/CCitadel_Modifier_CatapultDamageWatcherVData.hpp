#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CCitadelModifier.hpp"
#include "source2sdk/client/CCitadelModifierVData.hpp"

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
        // Size: 0x768
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CCitadel_Modifier_CatapultDamageWatcherVData : public source2sdk::client::CCitadelModifierVData
        {
        public:
            // metadata: MPropertyStartGroup "Modifiers"
            // m_StunModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::client::CCitadelModifier> m_StunModifier;
            char m_StunModifier[0x10]; // 0x750            
            float m_flDamageHealthPct; // 0x760            
            uint8_t _pad0764[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Modifier_CatapultDamageWatcherVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Modifier_CatapultDamageWatcherVData) == 0x768);
    };
};
