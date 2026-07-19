#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CBaseEntity.hpp"
namespace source2sdk
{
    namespace vphysics2
    {
        struct IPhysicsJoint;
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
        // Size: 0x4e0
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CPhysicsSpring : public source2sdk::server::CBaseEntity
        {
        public:
            // metadata: MPhysPtr
            source2sdk::vphysics2::IPhysicsJoint* m_pSpringJoint; // 0x498            
            float m_flFrequency; // 0x4a0            
            float m_flDampingRatio; // 0x4a4            
            float m_flRestLength; // 0x4a8            
            uint8_t _pad04ac[0x4]; // 0x4ac
            CUtlSymbolLarge m_nameAttachStart; // 0x4b0            
            CUtlSymbolLarge m_nameAttachEnd; // 0x4b8            
            VectorWS m_start; // 0x4c0            
            VectorWS m_end; // 0x4cc            
            // metadata: MNotSaved
            std::uint32_t m_teleportTick; // 0x4d8            
            uint8_t _pad04dc[0x4];
            
            // Datamap fields:
            // float lengthscale; // 0x7fffffff
            // float InputSetFrequency; // 0x0
            // float InputSetDampingRatio; // 0x0
            // float InputSetRestLength; // 0x0
            // float InputAddRestLength; // 0x0
            // float InputRemoveRestLength; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CPhysicsSpring because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CPhysicsSpring) == 0x4e0);
    };
};
