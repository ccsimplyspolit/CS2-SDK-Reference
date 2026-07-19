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
        // Size: 0x928
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CPhysBox : public source2sdk::server::CBreakable
        {
        public:
            std::int32_t m_damageType; // 0x848            
            std::int32_t m_damageToEnableMotion; // 0x84c            
            float m_flForceToEnableMotion; // 0x850            
            Vector m_vHoverPosePosition; // 0x854            
            QAngle m_angHoverPoseAngles; // 0x860            
            bool m_bNotSolidToWorld; // 0x86c            
            bool m_bEnableUseOutput; // 0x86d            
            source2sdk::server::HoverPoseFlags_t m_nHoverPoseFlags; // 0x86e            
            uint8_t _pad086f[0x1]; // 0x86f
            float m_flTouchOutputPerEntityDelay; // 0x870            
            uint8_t _pad0874[0x4]; // 0x874
            CUtlSymbolLarge m_iszCollisionGroup; // 0x878            
            CUtlSymbolLarge m_iszInteractsAs; // 0x880            
            CUtlSymbolLarge m_iszInteractsWith; // 0x888            
            CUtlSymbolLarge m_iszInteractsExclude; // 0x890            
            source2sdk::entity2::CEntityIOOutput m_OnDamaged; // 0x898            
            source2sdk::entity2::CEntityIOOutput m_OnAwakened; // 0x8b0            
            source2sdk::entity2::CEntityIOOutput m_OnMotionEnabled; // 0x8c8            
            source2sdk::entity2::CEntityIOOutput m_OnPlayerUse; // 0x8e0            
            source2sdk::entity2::CEntityIOOutput m_OnStartTouch; // 0x8f8            
            uint8_t _pad0910[0x18];
            
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
        
        static_assert(sizeof(source2sdk::server::CPhysBox) == 0x928);
    };
};
