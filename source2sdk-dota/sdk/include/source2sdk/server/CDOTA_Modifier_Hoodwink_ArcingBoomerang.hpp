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
        // Size: 0x1b00
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Hoodwink_ArcingBoomerang : public source2sdk::client::CDOTA_Buff
        {
        public:
            VectorWS m_vLeftControl; // 0x1a58            
            VectorWS m_vRightControl; // 0x1a64            
            VectorWS m_vTargetLoc; // 0x1a70            
            VectorWS m_vOriginalTargetLoc; // 0x1a7c            
            VectorWS m_vSourceLoc; // 0x1a88            
            bool m_bGroundTargeted; // 0x1a94            
            uint8_t _pad1a95[0x3]; // 0x1a95
            float m_flTravelDuration; // 0x1a98            
            source2sdk::entity2::GameTime_t m_flBoomerangDieTime; // 0x1a9c            
            bool m_bReturning; // 0x1aa0            
            bool m_bCatchingBoomerang; // 0x1aa1            
            bool m_bDisjointed; // 0x1aa2            
            uint8_t _pad1aa3[0x1]; // 0x1aa3
            std::int32_t m_nFramesToWait; // 0x1aa4            
            // m_hBoomerang has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hBoomerang;
            char m_hBoomerang[0x4]; // 0x1aa8            
            // m_hTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hTarget;
            char m_hTarget[0x4]; // 0x1aac            
            source2sdk::client::ParticleIndex_t m_nBoomerangFXIndex; // 0x1ab0            
            source2sdk::client::ParticleIndex_t m_nOldBoomerangFXindex; // 0x1ab4            
            // m_vecUniqueHitList has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_vecUniqueHitList;
            char m_vecUniqueHitList[0x18]; // 0x1ab8            
            float radius; // 0x1ad0            
            float spread; // 0x1ad4            
            float damage; // 0x1ad8            
            float mark_duration; // 0x1adc            
            float min_throw_duration; // 0x1ae0            
            float max_throw_duration; // 0x1ae4            
            uint8_t _pad1ae8[0x18];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Hoodwink_ArcingBoomerang because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Hoodwink_ArcingBoomerang) == 0x1b00);
    };
};
