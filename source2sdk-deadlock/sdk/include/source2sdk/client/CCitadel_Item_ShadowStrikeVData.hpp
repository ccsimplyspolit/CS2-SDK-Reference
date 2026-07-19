#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CCitadelModifier.hpp"
#include "source2sdk/client/CitadelItemVData.hpp"

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
        // Size: 0x18d8
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CCitadel_Item_ShadowStrikeVData : public source2sdk::client::CitadelItemVData
        {
        public:
            // metadata: MPropertyGroupName "Modifiers"
            // m_ShadowStrikeInvisModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::client::CCitadelModifier> m_ShadowStrikeInvisModifier;
            char m_ShadowStrikeInvisModifier[0x10]; // 0x18b8            
            // m_StealWatcherModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::client::CCitadelModifier> m_StealWatcherModifier;
            char m_StealWatcherModifier[0x10]; // 0x18c8            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Item_ShadowStrikeVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Item_ShadowStrikeVData) == 0x18d8);
    };
};
