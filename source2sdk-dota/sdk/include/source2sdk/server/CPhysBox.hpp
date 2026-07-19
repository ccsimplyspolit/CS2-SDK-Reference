#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/server/CBreakable.hpp"
#include "source2sdk/server/HoverPoseFlags_t.hpp"

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
        // Size: 0x930
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CPhysBox : public source2sdk::server::CBreakable
        {
        public:
            std::int32_t m_damageType; // 0x850            
            std::int32_t m_damageToEnableMotion; // 0x854            
            float m_flForceToEnableMotion; // 0x858            
            Vector m_vHoverPosePosition; // 0x85c            
            QAngle m_angHoverPoseAngles; // 0x868            
            bool m_bNotSolidToWorld; // 0x874            
            bool m_bEnableUseOutput; // 0x875            
            source2sdk::server::HoverPoseFlags_t m_nHoverPoseFlags; // 0x876            
            uint8_t _pad0877[0x1]; // 0x877
            float m_flTouchOutputPerEntityDelay; // 0x878            
            uint8_t _pad087c[0x4]; // 0x87c
            CUtlSymbolLarge m_iszCollisionGroup; // 0x880            
            CUtlSymbolLarge m_iszInteractsAs; // 0x888            
            CUtlSymbolLarge m_iszInteractsWith; // 0x890            
            CUtlSymbolLarge m_iszInteractsExclude; // 0x898            
            source2sdk::entity2::CEntityIOOutput m_OnDamaged; // 0x8a0            
            source2sdk::entity2::CEntityIOOutput m_OnAwakened; // 0x8b8            
            source2sdk::entity2::CEntityIOOutput m_OnMotionEnabled; // 0x8d0            
            source2sdk::entity2::CEntityIOOutput m_OnPlayerUse; // 0x8e8            
            source2sdk::entity2::CEntityIOOutput m_OnStartTouch; // 0x900            
            uint8_t _pad0918[0x18];
            
            // Datamap fields:
            // QAngle preferredcarryangles; // 0x7fffffff
            // void InputWake; // 0x0
            // void InputSleep; // 0x0
            // void InputEnableMotion; // 0x0
            // void InputDisableMotion; // 0x0
            // void InputForceDrop; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CPhysBox because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CPhysBox) == 0x930);
    };
};
