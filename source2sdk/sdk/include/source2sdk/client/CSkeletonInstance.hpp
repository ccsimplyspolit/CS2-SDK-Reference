#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CGameSceneNode.hpp"
#include "source2sdk/client/CModelState.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x10
        // Alignment: 0x10
        // Standard-layout class: false
        // Size: 0x490
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CSkeletonInstance : public source2sdk::client::CGameSceneNode
        {
        public:
            uint8_t _pad0130[0x10]; // 0x130
            source2sdk::client::CModelState m_modelState; // 0x140            
            // metadata: MNotSaved
            bool m_bUseParentRenderBounds; // 0x3f0            
            bool m_bDisableSolidCollisionsForHierarchy; // 0x3f1            
            // metadata: MNotSaved
            bool m_bDirtyMotionType; // 0x3f2            
            // metadata: MNotSaved
            bool m_bIsGeneratingLatchedParentSpaceState; // 0x3f3            
            uint8_t _pad03f4[0x4]; // 0x3f4
            CUtlStringToken m_materialGroup; // 0x3f8            
            std::uint8_t m_nHitboxSet; // 0x3fc            
            uint8_t _pad03fd[0x93];
            
            // Datamap fields:
            // Vector velocity; // 0x7fffffff
            // Vector rotationAxis; // 0x7fffffff
            // float rotationSpeed; // 0x7fffffff
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CSkeletonInstance because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CSkeletonInstance) == 0x490);
    };
};
