#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
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
        // Alignment: unknown
        // Standard-layout class: false
        // Size: 0x1a60
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Largo_FroglingBand2_Frogling : public source2sdk::client::CDOTA_Buff
        {
        public:
            // m_hAttachTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hAttachTarget;
            char m_hAttachTarget[0x4]; // 0x1a58            
            uint8_t _pad1a5c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Largo_FroglingBand2_Frogling because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Largo_FroglingBand2_Frogling) == 0x1a60);
    };
};
