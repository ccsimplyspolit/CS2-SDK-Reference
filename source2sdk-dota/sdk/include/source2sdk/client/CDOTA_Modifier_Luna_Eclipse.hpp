#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
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
        class CDOTA_Modifier_Luna_Eclipse : public source2sdk::client::CDOTA_Buff
        {
        public:
            // m_hTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hTarget;
            char m_hTarget[0x4]; // 0x1a58            
            float radius; // 0x1a5c            
            std::int32_t beams; // 0x1a60            
            std::int32_t hit_count; // 0x1a64            
            std::int32_t m_iBeamDamage; // 0x1a68            
            float beam_interval; // 0x1a6c            
            float stun_duration; // 0x1a70            
            VectorWS vPosition; // 0x1a74            
            bool bAreaTarget; // 0x1a80            
            uint8_t _pad1a81[0x3]; // 0x1a81
            std::int32_t m_iTickCount; // 0x1a84            
            source2sdk::client::ParticleIndex_t m_nMoonlightFXIndex; // 0x1a88            
            uint8_t _pad1a8c[0x4]; // 0x1a8c
            // m_HitTargets has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::client::C_BaseEntity>> m_HitTargets;
            char m_HitTargets[0x18]; // 0x1a90            
            float m_flBeamStun; // 0x1aa8            
            uint8_t _pad1aac[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Luna_Eclipse because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Luna_Eclipse) == 0x1ab0);
    };
};
