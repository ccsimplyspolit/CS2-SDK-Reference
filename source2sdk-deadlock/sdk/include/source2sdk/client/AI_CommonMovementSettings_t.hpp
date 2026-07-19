#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x4
        // Alignment: 0x4
        // Standard-layout class: true
        // Size: 0x24
        // Has Trivial Destructor
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct AI_CommonMovementSettings_t
        {
        public:
            float m_flSpringConstant; // 0x0            
            // metadata: MPropertyFriendlyName "Max Tension"
            float m_flMaxSpringTension; // 0x4            
            float m_flSharpStartAngle; // 0x8            
            float m_flMinIdleTurnAngle; // 0xc            
            bool m_bUseSmoothPaths; // 0x10            
            uint8_t _pad0011[0x3]; // 0x11
            float m_flMovementMaxPathEndDirectionAngleDifferenceForStop; // 0x14            
            float m_flMaxHopFacingDelta; // 0x18            
            float m_flNavLinkSmoothMaxEntryAngle; // 0x1c            
            float m_flNavLinkSmoothMinSegmentLength; // 0x20            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::AI_CommonMovementSettings_t, m_flSpringConstant) == 0x0);
        static_assert(offsetof(source2sdk::client::AI_CommonMovementSettings_t, m_flMaxSpringTension) == 0x4);
        static_assert(offsetof(source2sdk::client::AI_CommonMovementSettings_t, m_flSharpStartAngle) == 0x8);
        static_assert(offsetof(source2sdk::client::AI_CommonMovementSettings_t, m_flMinIdleTurnAngle) == 0xc);
        static_assert(offsetof(source2sdk::client::AI_CommonMovementSettings_t, m_bUseSmoothPaths) == 0x10);
        static_assert(offsetof(source2sdk::client::AI_CommonMovementSettings_t, m_flMovementMaxPathEndDirectionAngleDifferenceForStop) == 0x14);
        static_assert(offsetof(source2sdk::client::AI_CommonMovementSettings_t, m_flMaxHopFacingDelta) == 0x18);
        static_assert(offsetof(source2sdk::client::AI_CommonMovementSettings_t, m_flNavLinkSmoothMaxEntryAngle) == 0x1c);
        static_assert(offsetof(source2sdk::client::AI_CommonMovementSettings_t, m_flNavLinkSmoothMinSegmentLength) == 0x20);
        
        static_assert(sizeof(source2sdk::client::AI_CommonMovementSettings_t) == 0x24);
    };
};
