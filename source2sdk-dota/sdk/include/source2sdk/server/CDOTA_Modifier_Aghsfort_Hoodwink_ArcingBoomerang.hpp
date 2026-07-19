#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
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
        // Size: 0x1af0
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Aghsfort_Hoodwink_ArcingBoomerang : public source2sdk::client::CDOTA_Buff
        {
        public:
            VectorWS m_vLeftControl; // 0x1a58            
            VectorWS m_vRightControl; // 0x1a64            
            VectorWS m_vTargetLoc; // 0x1a70            
            VectorWS m_vOriginalTargetLoc; // 0x1a7c            
            VectorWS m_vSourceLoc; // 0x1a88            
            float m_flBuffDuration; // 0x1a94            
            source2sdk::entity2::GameTime_t m_flBuffDieTime; // 0x1a98            
            bool m_bReturning; // 0x1a9c            
            uint8_t _pad1a9d[0x3]; // 0x1a9d
            std::int32_t m_nFramesToWait; // 0x1aa0            
            // m_hBoomerang has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hBoomerang;
            char m_hBoomerang[0x4]; // 0x1aa4            
            source2sdk::client::ParticleIndex_t m_nBoomerangFXIndex; // 0x1aa8            
            source2sdk::client::ParticleIndex_t m_nOldBoomerangFXindex; // 0x1aac            
            // m_vecUniqueHitList has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_vecUniqueHitList;
            char m_vecUniqueHitList[0x18]; // 0x1ab0            
            std::int32_t radius; // 0x1ac8            
            std::int32_t spread; // 0x1acc            
            std::int32_t damage; // 0x1ad0            
            float min_throw_duration; // 0x1ad4            
            float max_throw_duration; // 0x1ad8            
            uint8_t _pad1adc[0x14];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Aghsfort_Hoodwink_ArcingBoomerang because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Aghsfort_Hoodwink_ArcingBoomerang) == 0x1af0);
    };
};
