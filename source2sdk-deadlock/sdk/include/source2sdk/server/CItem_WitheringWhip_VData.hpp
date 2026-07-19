#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CBaseModifier.hpp"
#include "source2sdk/server/CCitadel_Item_TrackingProjectileApplyModifierVData.hpp"

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
        // Size: 0x19c8
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CItem_WitheringWhip_VData : public source2sdk::server::CCitadel_Item_TrackingProjectileApplyModifierVData
        {
        public:
            // metadata: MPropertyGroupName "Modifiers"
            // m_DebuffModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::server::CBaseModifier> m_DebuffModifier;
            char m_DebuffModifier[0x10]; // 0x19b8            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CItem_WitheringWhip_VData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CItem_WitheringWhip_VData) == 0x19c8);
    };
};
