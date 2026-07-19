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
        // Size: 0x1aa8
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Centaur_Mount_Toss : public source2sdk::client::CDOTA_Buff
        {
        public:
            float air_duration; // 0x1a58            
            std::int32_t air_height; // 0x1a5c            
            std::int32_t travel_distance; // 0x1a60            
            // m_hTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hTarget;
            char m_hTarget[0x4]; // 0x1a64            
            float m_flPredictedTotalTime; // 0x1a68            
            VectorWS m_vStartPosition; // 0x1a6c            
            float m_flCurrentTimeHoriz; // 0x1a78            
            float m_flCurrentTimeVert; // 0x1a7c            
            bool m_bHorizontalMotionInterrupted; // 0x1a80            
            bool m_bDamageApplied; // 0x1a81            
            bool m_bTargetTeleported; // 0x1a82            
            uint8_t _pad1a83[0x1]; // 0x1a83
            Vector m_vHorizontalVelocity; // 0x1a84            
            VectorWS m_vLastKnownTargetPosition; // 0x1a90            
            float m_flInitialVelocityZ; // 0x1a9c            
            bool m_bDone; // 0x1aa0            
            uint8_t _pad1aa1[0x7];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Centaur_Mount_Toss because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Centaur_Mount_Toss) == 0x1aa8);
    };
};
