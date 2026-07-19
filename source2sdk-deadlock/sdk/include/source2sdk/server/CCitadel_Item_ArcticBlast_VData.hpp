#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CCitadelModifier.hpp"
#include "source2sdk/server/CitadelItemVData.hpp"

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
        // Size: 0x18c8
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CCitadel_Item_ArcticBlast_VData : public source2sdk::server::CitadelItemVData
        {
        public:
            // metadata: MPropertyStartGroup "Modifiers"
            // m_AOEModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::server::CCitadelModifier> m_AOEModifier;
            char m_AOEModifier[0x10]; // 0x18b8            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Item_ArcticBlast_VData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Item_ArcticBlast_VData) == 0x18c8);
    };
};
