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
        // Size: 0x1ac0
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Elder_Titan_EarthSplitter_Caster : public source2sdk::client::CDOTA_Buff
        {
        public:
            // m_hHitUnits has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_hHitUnits;
            char m_hHitUnits[0x18]; // 0x1a58            
            float vision_width; // 0x1a70            
            float vision_interval; // 0x1a74            
            float vision_duration; // 0x1a78            
            std::int32_t vision_step; // 0x1a7c            
            std::int32_t total_steps; // 0x1a80            
            std::int32_t m_nCompletedSteps; // 0x1a84            
            VectorWS m_vStart; // 0x1a88            
            VectorWS m_vEnd; // 0x1a94            
            VectorWS m_vNextVisionLocation; // 0x1aa0            
            Vector m_vCastDirection; // 0x1aac            
            std::int32_t m_nHumHeroesHit; // 0x1ab8            
            bool m_bHitInvisibleHero; // 0x1abc            
            uint8_t _pad1abd[0x3];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Elder_Titan_EarthSplitter_Caster because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Elder_Titan_EarthSplitter_Caster) == 0x1ac0);
    };
};
