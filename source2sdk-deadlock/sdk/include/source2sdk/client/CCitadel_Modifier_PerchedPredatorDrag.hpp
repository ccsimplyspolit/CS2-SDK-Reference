#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CCitadelModifier.hpp"
namespace source2sdk
{
    namespace client
    {
        struct C_BaseEntity;
    };
};

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: unknown
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x1e0
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Modifier_PerchedPredatorDrag : public source2sdk::client::CCitadelModifier
        {
        public:
            uint8_t _pad00c0[0x100]; // 0xc0
            QAngle m_qRelativeOffset; // 0x1c0            
            float m_flRelativeDist; // 0x1cc            
            Vector m_vecOffsetDir; // 0x1d0            
            // m_hFollowEnt has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hFollowEnt;
            char m_hFollowEnt[0x4]; // 0x1dc            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Modifier_PerchedPredatorDrag because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Modifier_PerchedPredatorDrag) == 0x1e0);
    };
};
