#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/CountdownTimer.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
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
        // Size: 0x1ab0
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_AghsFort_Spectre_ActiveDispersion_Thinker : public source2sdk::client::CDOTA_Buff
        {
        public:
            float m_fDamage; // 0x1a58            
            float m_fLastRadius; // 0x1a5c            
            float m_fCurRadius; // 0x1a60            
            source2sdk::entity2::GameTime_t m_fLastThink; // 0x1a64            
            bool m_bContracting; // 0x1a68            
            uint8_t _pad1a69[0x7]; // 0x1a69
            source2sdk::client::CountdownTimer m_ViewerTimer; // 0x1a70            
            source2sdk::client::ParticleIndex_t m_nFXIndex; // 0x1a88            
            uint8_t _pad1a8c[0x4]; // 0x1a8c
            // m_EntitiesHit has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::client::C_BaseEntity>> m_EntitiesHit;
            char m_EntitiesHit[0x18]; // 0x1a90            
            std::int32_t speed; // 0x1aa8            
            std::int32_t radius; // 0x1aac            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_AghsFort_Spectre_ActiveDispersion_Thinker because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_AghsFort_Spectre_ActiveDispersion_Thinker) == 0x1ab0);
    };
};
