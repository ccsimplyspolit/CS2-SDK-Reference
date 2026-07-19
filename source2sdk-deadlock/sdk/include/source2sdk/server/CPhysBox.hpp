#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/server/CBreakable.hpp"
#include "source2sdk/server/HoverPoseFlags_t.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CBasePlayerPawn;
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
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x920
        // Has VTable
        #pragma pack(push, 1)
        class CPhysBox : public source2sdk::server::CBreakable
        {
        public:
            std::int32_t m_damageType; // 0x858            
            std::int32_t m_damageToEnableMotion; // 0x85c            
            float m_flForceToEnableMotion; // 0x860            
            Vector m_vHoverPosePosition; // 0x864            
            QAngle m_angHoverPoseAngles; // 0x870            
            bool m_bNotSolidToWorld; // 0x87c            
            bool m_bEnableUseOutput; // 0x87d            
            source2sdk::server::HoverPoseFlags_t m_nHoverPoseFlags; // 0x87e            
            uint8_t _pad087f[0x1]; // 0x87f
            float m_flTouchOutputPerEntityDelay; // 0x880            
            uint8_t _pad0884[0x4]; // 0x884
            source2sdk::entity2::CEntityIOOutput m_OnDamaged; // 0x888            
            source2sdk::entity2::CEntityIOOutput m_OnAwakened; // 0x8a0            
            source2sdk::entity2::CEntityIOOutput m_OnMotionEnabled; // 0x8b8            
            source2sdk::entity2::CEntityIOOutput m_OnPlayerUse; // 0x8d0            
            source2sdk::entity2::CEntityIOOutput m_OnStartTouch; // 0x8e8            
            // m_hCarryingPlayer has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBasePlayerPawn> m_hCarryingPlayer;
            char m_hCarryingPlayer[0x4]; // 0x900            
            uint8_t _pad0904[0x1c];
            
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
        
        static_assert(sizeof(source2sdk::server::CPhysBox) == 0x920);
    };
};
