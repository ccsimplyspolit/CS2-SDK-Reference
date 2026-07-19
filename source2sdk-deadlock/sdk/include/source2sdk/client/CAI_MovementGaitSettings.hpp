#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/AI_MovementHeadingSettings_t.hpp"
#include "source2sdk/modellib/MovementCapability_t.hpp"
#include "source2sdk/tier2/CRangeFloat.hpp"

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
        // Standard-layout class: true
        // Size: 0xc0
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CAI_MovementGaitSettings
        {
        public:
            // metadata: MPropertySortPriority "4"
            // metadata: MPropertyFriendlyName "Speed Range (optional)"
            // metadata: MPropertySuppressExpr "m_bEnabled == false"
            source2sdk::tier2::CRangeFloat m_speedRange; // 0x0            
            // metadata: MPropertySortPriority "3"
            // metadata: MPropertySuppressExpr "m_bEnabled == false"
            source2sdk::tier2::CRangeFloat m_stopDistanceRange; // 0x8            
            // metadata: MPropertySortPriority "2"
            // metadata: MPropertySuppressExpr "m_bEnabled == false"
            source2sdk::tier2::CRangeFloat m_hopDistanceRange; // 0x10            
            // metadata: MPropertySortPriority "5"
            // metadata: MPropertyFriendlyName "Speed (Preferred)"
            // metadata: MPropertySuppressExpr "m_bEnabled == false"
            float m_flPreferredSpeed; // 0x18            
            // metadata: MPropertySortPriority "1"
            // metadata: MPropertySuppressExpr "m_bEnabled == false"
            float m_flStartDistance; // 0x1c            
            // metadata: MPropertySortPriority "0"
            // metadata: MPropertyFriendlyName "Min Turn Radius"
            // metadata: MPropertySuppressExpr "m_bEnabled == false"
            float m_flMinTurnRadius; // 0x20            
            // metadata: MPropertySortPriority "6"
            // metadata: MPropertySuppressExpr "m_bEnabled == false"
            // m_capabilities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CBitVecEnum<source2sdk::modellib::MovementCapability_t> m_capabilities;
            char m_capabilities[0x4]; // 0x24            
            // metadata: MPropertyGroupName "Additional Settings"
            // metadata: MPropertySuppressExpr "m_bEnabled == false"
            float m_flAcceleration; // 0x28            
            // metadata: MPropertyGroupName "Additional Settings"
            // metadata: MPropertySuppressExpr "m_bEnabled == false"
            float m_flDeceleration; // 0x2c            
            // metadata: MPropertyGroupName "Additional Settings"
            // metadata: MPropertySuppressExpr "m_bEnabled == false"
            CPiecewiseCurve m_decelerationCurve; // 0x30            
            // metadata: MPropertyGroupName "Additional Settings"
            // metadata: MPropertySuppressExpr "m_bEnabled == false"
            float m_flProceduralIdleTurnSpeed; // 0x70            
            uint8_t _pad0074[0x4]; // 0x74
            // metadata: MPropertyGroupName "Additional Settings"
            // metadata: MPropertySuppressExpr "m_bEnabled == false"
            source2sdk::client::AI_MovementHeadingSettings_t m_heading; // 0x78            
            // metadata: MPropertyGroupName "Additional Settings"
            // metadata: MPropertySuppressExpr "m_bEnabled == false"
            float m_flMaxIdleTurnScaleUp; // 0xa0            
            // metadata: MPropertyGroupName "Additional Settings"
            // metadata: MPropertySuppressExpr "m_bEnabled == false"
            // metadata: MPropertyDescription "What angle between the current move direction and the direction to the next waypoint will trigger a planted turn. Any value <= 0 will use the sharp angle from the vmdl movement settings."
            float m_flMovementPlantedTurnAngleThreshold; // 0xa4            
            // metadata: MPropertyGroupName "Additional Settings"
            // metadata: MPropertySuppressExpr "m_bEnabled == false"
            float m_flBashStartDistance; // 0xa8            
            // metadata: MPropertyGroupName "Additional Settings"
            // metadata: MPropertySuppressExpr "m_bEnabled == false"
            float m_flMinBashDelay; // 0xac            
            // metadata: MPropertyGroupName "Additional Settings"
            // metadata: MPropertySuppressExpr "m_bEnabled == false"
            source2sdk::tier2::CRangeFloat m_flMantleDelayRange; // 0xb0            
            // metadata: MPropertyGroupName "Additional Settings"
            // metadata: MPropertySuppressExpr "m_bEnabled == false"
            float m_flMantleStartDistance; // 0xb8            
            // metadata: MPropertyFlattenIntoParentRow
            bool m_bEnabled; // 0xbc            
            uint8_t _pad00bd[0x3];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CAI_MovementGaitSettings, m_speedRange) == 0x0);
        static_assert(offsetof(source2sdk::client::CAI_MovementGaitSettings, m_stopDistanceRange) == 0x8);
        static_assert(offsetof(source2sdk::client::CAI_MovementGaitSettings, m_hopDistanceRange) == 0x10);
        static_assert(offsetof(source2sdk::client::CAI_MovementGaitSettings, m_flPreferredSpeed) == 0x18);
        static_assert(offsetof(source2sdk::client::CAI_MovementGaitSettings, m_flStartDistance) == 0x1c);
        static_assert(offsetof(source2sdk::client::CAI_MovementGaitSettings, m_flMinTurnRadius) == 0x20);
        static_assert(offsetof(source2sdk::client::CAI_MovementGaitSettings, m_capabilities) == 0x24);
        static_assert(offsetof(source2sdk::client::CAI_MovementGaitSettings, m_flAcceleration) == 0x28);
        static_assert(offsetof(source2sdk::client::CAI_MovementGaitSettings, m_flDeceleration) == 0x2c);
        static_assert(offsetof(source2sdk::client::CAI_MovementGaitSettings, m_decelerationCurve) == 0x30);
        static_assert(offsetof(source2sdk::client::CAI_MovementGaitSettings, m_flProceduralIdleTurnSpeed) == 0x70);
        static_assert(offsetof(source2sdk::client::CAI_MovementGaitSettings, m_heading) == 0x78);
        static_assert(offsetof(source2sdk::client::CAI_MovementGaitSettings, m_flMaxIdleTurnScaleUp) == 0xa0);
        static_assert(offsetof(source2sdk::client::CAI_MovementGaitSettings, m_flMovementPlantedTurnAngleThreshold) == 0xa4);
        static_assert(offsetof(source2sdk::client::CAI_MovementGaitSettings, m_flBashStartDistance) == 0xa8);
        static_assert(offsetof(source2sdk::client::CAI_MovementGaitSettings, m_flMinBashDelay) == 0xac);
        static_assert(offsetof(source2sdk::client::CAI_MovementGaitSettings, m_flMantleDelayRange) == 0xb0);
        static_assert(offsetof(source2sdk::client::CAI_MovementGaitSettings, m_flMantleStartDistance) == 0xb8);
        static_assert(offsetof(source2sdk::client::CAI_MovementGaitSettings, m_bEnabled) == 0xbc);
        
        static_assert(sizeof(source2sdk::client::CAI_MovementGaitSettings) == 0xc0);
    };
};
