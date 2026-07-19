#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CGameSceneNode.hpp"
#include "source2sdk/server/CModelState.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: 0x10
        // Alignment: 0x10
        // Standard-layout class: false
        // Size: 0x460
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CSkeletonInstance : public source2sdk::server::CGameSceneNode
        {
        public:
            uint8_t _pad0110[0x10]; // 0x110
            source2sdk::server::CModelState m_modelState; // 0x120            
            // metadata: MNotSaved
            bool m_bUseParentRenderBounds; // 0x3b0            
            bool m_bDisableSolidCollisionsForHierarchy; // 0x3b1            
            // metadata: MNotSaved
            bool m_bDirtyMotionType; // 0x3b2            
            // metadata: MNotSaved
            bool m_bIsGeneratingLatchedParentSpaceState; // 0x3b3            
            uint8_t _pad03b4[0x4]; // 0x3b4
            CUtlStringToken m_materialGroup; // 0x3b8            
            std::uint8_t m_nHitboxSet; // 0x3bc            
            uint8_t _pad03bd[0x5f]; // 0x3bd
            bool m_bForceServerConstraintsEnabled; // 0x41c            
            uint8_t _pad041d[0x43];
            
            // Datamap fields:
            // Vector velocity; // 0x7fffffff
            // Vector rotationAxis; // 0x7fffffff
            // float rotationSpeed; // 0x7fffffff
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CSkeletonInstance because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CSkeletonInstance) == 0x460);
    };
};
