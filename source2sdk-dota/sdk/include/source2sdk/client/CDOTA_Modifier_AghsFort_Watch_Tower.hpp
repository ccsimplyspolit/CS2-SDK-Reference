#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/client/TowerState_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"

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
        // Size: 0x1aa0
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_AghsFort_Watch_Tower : public source2sdk::client::CDOTA_Buff
        {
        public:
            source2sdk::client::TowerState_t m_nState; // 0x1a58            
            float m_flYaw; // 0x1a5c            
            std::int32_t m_nCaptureDuration; // 0x1a60            
            source2sdk::entity2::GameTime_t m_flEffectiveCaptureStartTime; // 0x1a64            
            std::int32_t m_nCapturingPlayerCount; // 0x1a68            
            float m_flCaptureProgress; // 0x1a6c            
            std::int32_t m_iCapturingTeam; // 0x1a70            
            source2sdk::client::ParticleIndex_t m_nFxOutpostAmbient; // 0x1a74            
            source2sdk::entity2::GameTime_t m_flDestroyTime; // 0x1a78            
            source2sdk::entity2::GameTime_t m_flAutoChannelCompleteTime; // 0x1a7c            
            bool m_bAscensionLevelPicker; // 0x1a80            
            uint8_t _pad1a81[0x3]; // 0x1a81
            std::int32_t m_nEliteChallengeLevel; // 0x1a84            
            CUtlString m_strNextRoomName; // 0x1a88            
            CUtlString m_strNextEncounterName; // 0x1a90            
            bool m_bStartedBeamFacing; // 0x1a98            
            uint8_t _pad1a99[0x7];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_AghsFort_Watch_Tower because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_AghsFort_Watch_Tower) == 0x1aa0);
    };
};
