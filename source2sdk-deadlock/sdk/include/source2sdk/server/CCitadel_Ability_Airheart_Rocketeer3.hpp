#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/EJetpackMode_t.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CCitadelBaseAbility.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x1508
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "bool m_bJetpackActive"
        // static metadata: MNetworkVarNames "GameTime_t m_tJetpackInputDownTime"
        // static metadata: MNetworkVarNames "Vector m_vPreservedVelocity"
        // static metadata: MNetworkVarNames "bool m_bHasLeftGround"
        // static metadata: MNetworkVarNames "bool m_bOutOfFuelAndHaventTouchedGround"
        // static metadata: MNetworkVarNames "EJetpackMode_t m_eMode"
        // static metadata: MNetworkVarNames "GameTime_t m_tModeBeginTime"
        // static metadata: MNetworkVarNames "Vector m_vJetpackInput"
        // static metadata: MNetworkVarNames "GameTime_t m_tLastWallAttachTime"
        // static metadata: MNetworkVarNames "GameTime_t m_tLastGroundedTime"
        // static metadata: MNetworkVarNames "bool m_bQueueWallAttachJump"
        // static metadata: MNetworkVarNames "GameTime_t m_tOverdriveBeginTime"
        // static metadata: MNetworkVarNames "Vector m_vIntentSpaceMPCVelocity"
        // static metadata: MNetworkVarNames "Vector m_vIntentSpaceMPCOrigin"
        // static metadata: MNetworkVarNames "float m_flIntentSpeedVerticalActual"
        // static metadata: MNetworkVarNames "float m_flIntentMultiplier"
        #pragma pack(push, 1)
        class CCitadel_Ability_Airheart_Rocketeer3 : public source2sdk::server::CCitadelBaseAbility
        {
        public:
            uint8_t _pad0f70[0x500]; // 0xf70
            source2sdk::client::ParticleIndex_t m_nJetpackFireFX; // 0x1470            
            uint8_t _pad1474[0x28]; // 0x1474
            Vector m_vDebugVelocityIntentModelSpace; // 0x149c            
            float m_flDebugCoeffFactor; // 0x14a8            
            // metadata: MNetworkEnable
            bool m_bJetpackActive; // 0x14ac            
            uint8_t _pad14ad[0x3]; // 0x14ad
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_tJetpackInputDownTime; // 0x14b0            
            // metadata: MNetworkEnable
            Vector m_vPreservedVelocity; // 0x14b4            
            // metadata: MNetworkEnable
            bool m_bHasLeftGround; // 0x14c0            
            // metadata: MNetworkEnable
            bool m_bOutOfFuelAndHaventTouchedGround; // 0x14c1            
            // metadata: MNetworkEnable
            source2sdk::client::EJetpackMode_t m_eMode; // 0x14c2            
            uint8_t _pad14c3[0x1]; // 0x14c3
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_tModeBeginTime; // 0x14c4            
            // metadata: MNetworkEnable
            Vector m_vJetpackInput; // 0x14c8            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_tLastWallAttachTime; // 0x14d4            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_tLastGroundedTime; // 0x14d8            
            // metadata: MNetworkEnable
            bool m_bQueueWallAttachJump; // 0x14dc            
            uint8_t _pad14dd[0x3]; // 0x14dd
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_tOverdriveBeginTime; // 0x14e0            
            // metadata: MNetworkEnable
            Vector m_vIntentSpaceMPCVelocity; // 0x14e4            
            // metadata: MNetworkEnable
            Vector m_vIntentSpaceMPCOrigin; // 0x14f0            
            // metadata: MNetworkEnable
            float m_flIntentSpeedVerticalActual; // 0x14fc            
            // metadata: MNetworkEnable
            float m_flIntentMultiplier; // 0x1500            
            uint8_t _pad1504[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_Airheart_Rocketeer3 because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Ability_Airheart_Rocketeer3) == 0x1508);
    };
};
