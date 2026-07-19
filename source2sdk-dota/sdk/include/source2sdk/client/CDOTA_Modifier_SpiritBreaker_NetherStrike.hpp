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
        // Size: 0x1a70
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_SpiritBreaker_NetherStrike : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t damage; // 0x1a58            
            bool m_bStrikeLanded; // 0x1a5c            
            uint8_t _pad1a5d[0x3]; // 0x1a5d
            VectorWS m_vCastLocation; // 0x1a60            
            // m_hTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hTarget;
            char m_hTarget[0x4]; // 0x1a6c            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_SpiritBreaker_NetherStrike because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_SpiritBreaker_NetherStrike) == 0x1a70);
    };
};
