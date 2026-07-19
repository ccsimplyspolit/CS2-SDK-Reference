#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
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
        // Size: 0x1aa0
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Aghsfort_Aziyog_Underlord_Portal_Warp_Channel : public source2sdk::client::CDOTA_Buff
        {
        public:
            source2sdk::client::ParticleIndex_t m_nfxTargetTp; // 0x1a58            
            source2sdk::client::ParticleIndex_t m_nfxTargetTp2; // 0x1a5c            
            source2sdk::client::ParticleIndex_t m_nfxAmbientFx; // 0x1a60            
            source2sdk::client::ParticleIndex_t m_nfxPortal1; // 0x1a64            
            source2sdk::client::ParticleIndex_t m_nfxPortal2; // 0x1a68            
            uint8_t _pad1a6c[0x14]; // 0x1a6c
            // m_hPortal has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hPortal;
            char m_hPortal[0x4]; // 0x1a80            
            VectorWS m_vStartPosition; // 0x1a84            
            float m_flTotalTime; // 0x1a90            
            float m_flElapsedTimePortion; // 0x1a94            
            float animation_rate; // 0x1a98            
            std::int32_t stop_distance; // 0x1a9c            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Aghsfort_Aziyog_Underlord_Portal_Warp_Channel because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Aghsfort_Aziyog_Underlord_Portal_Warp_Channel) == 0x1aa0);
    };
};
