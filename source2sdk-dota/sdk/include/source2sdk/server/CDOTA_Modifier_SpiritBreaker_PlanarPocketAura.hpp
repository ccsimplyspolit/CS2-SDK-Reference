#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CBaseEntity;
    };
};

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: unknown
        // Alignment: unknown
        // Standard-layout class: false
        // Size: 0x1a70
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_SpiritBreaker_PlanarPocketAura : public source2sdk::client::CDOTA_Buff
        {
        public:
            bool m_bHasActivated; // 0x1a58            
            uint8_t _pad1a59[0x3]; // 0x1a59
            // m_hTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hTarget;
            char m_hTarget[0x4]; // 0x1a5c            
            float radius; // 0x1a60            
            std::int32_t magic_resistance; // 0x1a64            
            float break_distance; // 0x1a68            
            uint8_t _pad1a6c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_SpiritBreaker_PlanarPocketAura because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_SpiritBreaker_PlanarPocketAura) == 0x1a70);
    };
};
