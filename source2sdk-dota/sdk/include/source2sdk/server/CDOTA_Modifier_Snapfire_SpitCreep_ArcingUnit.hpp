#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"

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
        class CDOTA_Modifier_Snapfire_SpitCreep_ArcingUnit : public source2sdk::client::CDOTA_Buff
        {
        public:
            float m_flPredictedTotalTime; // 0x1a58            
            VectorWS m_vStartPosition; // 0x1a5c            
            float m_flCurrentTimeHoriz; // 0x1a68            
            float m_flCurrentTimeVert; // 0x1a6c            
            bool m_bHorizontalMotionInterrupted; // 0x1a70            
            bool m_bDamageApplied; // 0x1a71            
            bool m_bTargetTeleported; // 0x1a72            
            uint8_t _pad1a73[0x1]; // 0x1a73
            Vector m_vHorizontalVelocity; // 0x1a74            
            VectorWS m_vLastKnownTargetPosition; // 0x1a80            
            float m_flInitialVelocityZ; // 0x1a8c            
            float m_fClampedProjectileSpeed; // 0x1a90            
            source2sdk::client::ParticleIndex_t m_nFXIndex; // 0x1a94            
            float m_fAcceleration; // 0x1a98            
            float min_range; // 0x1a9c            
            float min_lob_travel_time; // 0x1aa0            
            float max_lob_travel_time; // 0x1aa4            
            float impact_radius; // 0x1aa8            
            float projectile_vision; // 0x1aac            
            float stun_duration; // 0x1ab0            
            float min_height_above_lowest; // 0x1ab4            
            float min_height_above_highest; // 0x1ab8            
            float min_acceleration; // 0x1abc            
            float max_acceleration; // 0x1ac0            
            uint8_t _pad1ac4[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Snapfire_SpitCreep_ArcingUnit because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Snapfire_SpitCreep_ArcingUnit) == 0x1ac8);
    };
};
