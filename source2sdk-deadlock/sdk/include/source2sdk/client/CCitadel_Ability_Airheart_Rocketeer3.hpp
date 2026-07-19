#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_CitadelBaseAbility.hpp"
#include "source2sdk/client/EJetpackMode_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x1770
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
        class CCitadel_Ability_Airheart_Rocketeer3 : public source2sdk::client::C_CitadelBaseAbility
        {
        public:
            uint8_t _pad11d8[0x530]; // 0x11d8
            Vector m_vDebugVelocityIntentModelSpace; // 0x1708            
            float m_flDebugCoeffFactor; // 0x1714            
            // metadata: MNetworkEnable
            bool m_bJetpackActive; // 0x1718            
            uint8_t _pad1719[0x3]; // 0x1719
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_tJetpackInputDownTime; // 0x171c            
            // metadata: MNetworkEnable
            Vector m_vPreservedVelocity; // 0x1720            
            // metadata: MNetworkEnable
            bool m_bHasLeftGround; // 0x172c            
            // metadata: MNetworkEnable
            bool m_bOutOfFuelAndHaventTouchedGround; // 0x172d            
            // metadata: MNetworkEnable
            source2sdk::client::EJetpackMode_t m_eMode; // 0x172e            
            uint8_t _pad172f[0x1]; // 0x172f
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_tModeBeginTime; // 0x1730            
            // metadata: MNetworkEnable
            Vector m_vJetpackInput; // 0x1734            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_tLastWallAttachTime; // 0x1740            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_tLastGroundedTime; // 0x1744            
            // metadata: MNetworkEnable
            bool m_bQueueWallAttachJump; // 0x1748            
            uint8_t _pad1749[0x3]; // 0x1749
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_tOverdriveBeginTime; // 0x174c            
            // metadata: MNetworkEnable
            Vector m_vIntentSpaceMPCVelocity; // 0x1750            
            // metadata: MNetworkEnable
            Vector m_vIntentSpaceMPCOrigin; // 0x175c            
            // metadata: MNetworkEnable
            float m_flIntentSpeedVerticalActual; // 0x1768            
            // metadata: MNetworkEnable
            float m_flIntentMultiplier; // 0x176c            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_Airheart_Rocketeer3 because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Ability_Airheart_Rocketeer3) == 0x1770);
    };
};
