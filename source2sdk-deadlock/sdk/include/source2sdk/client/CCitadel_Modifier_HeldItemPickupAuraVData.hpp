#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CCitadel_Modifier_ItemPickupAuraVData.hpp"

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
        // Size: 0x898
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CCitadel_Modifier_HeldItemPickupAuraVData : public source2sdk::client::CCitadel_Modifier_ItemPickupAuraVData
        {
        public:
            // m_strFilterAbilityName has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CSubclassName<4> m_strFilterAbilityName;
            char m_strFilterAbilityName[0x10]; // 0x888            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Modifier_HeldItemPickupAuraVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Modifier_HeldItemPickupAuraVData) == 0x898);
    };
};
