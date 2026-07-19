#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CBaseEntity.hpp"

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
        // Size: 0x4b8
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CDOTA_AghsFort_BossPreview : public source2sdk::server::CBaseEntity
        {
        public:
            CUtlSymbolLarge m_strBossUnit; // 0x498            
            CUtlSymbolLarge m_strModelName; // 0x4a0            
            float m_flBossModelScale; // 0x4a8            
            float m_flExtraModelScale; // 0x4ac            
            std::int32_t m_nEncounterType; // 0x4b0            
            uint8_t _pad04b4[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_AghsFort_BossPreview because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_AghsFort_BossPreview) == 0x4b8);
    };
};
