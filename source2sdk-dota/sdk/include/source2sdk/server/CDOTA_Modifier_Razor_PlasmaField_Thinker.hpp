#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CountdownTimer.hpp"
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
        // Size: 0x1ac8
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Razor_PlasmaField_Thinker : public source2sdk::client::CDOTA_Buff
        {
        public:
            float m_fLastRadius; // 0x1a58            
            float m_fCurRadius; // 0x1a5c            
            source2sdk::entity2::GameTime_t m_fLastThink; // 0x1a60            
            bool m_bContracting; // 0x1a64            
            uint8_t _pad1a65[0x3]; // 0x1a65
            source2sdk::server::CountdownTimer m_ViewerTimer; // 0x1a68            
            source2sdk::client::ParticleIndex_t m_nFXIndex; // 0x1a80            
            uint8_t _pad1a84[0x4]; // 0x1a84
            // m_EntitiesHit has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_EntitiesHit;
            char m_EntitiesHit[0x18]; // 0x1a88            
            std::int32_t speed; // 0x1aa0            
            float radius; // 0x1aa4            
            float damage_min; // 0x1aa8            
            float damage_max; // 0x1aac            
            std::int32_t slow_min; // 0x1ab0            
            std::int32_t slow_max; // 0x1ab4            
            float slow_duration; // 0x1ab8            
            bool m_bHasCreatedFx; // 0x1abc            
            uint8_t _pad1abd[0x3]; // 0x1abd
            float total_ability_time; // 0x1ac0            
            uint8_t _pad1ac4[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Razor_PlasmaField_Thinker because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Razor_PlasmaField_Thinker) == 0x1ac8);
    };
};
