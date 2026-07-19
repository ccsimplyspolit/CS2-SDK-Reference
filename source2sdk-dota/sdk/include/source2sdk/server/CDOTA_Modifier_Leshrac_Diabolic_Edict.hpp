#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"

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
        // Size: 0x1a90
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Leshrac_Diabolic_Edict : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t num_explosions; // 0x1a58            
            float radius; // 0x1a5c            
            float m_fExplosions; // 0x1a60            
            float tower_bonus; // 0x1a64            
            std::int32_t affects_buildings; // 0x1a68            
            std::int32_t damage; // 0x1a6c            
            std::int32_t targets; // 0x1a70            
            std::int32_t iDamageType; // 0x1a74            
            bool m_bTalentActive; // 0x1a78            
            uint8_t _pad1a79[0x17];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Leshrac_Diabolic_Edict because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Leshrac_Diabolic_Edict) == 0x1a90);
    };
};
