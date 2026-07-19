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
        // Size: 0x4b0
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CSkeletonInstance : public source2sdk::client::CGameSceneNode
        {
        public:
            uint8_t _pad0150[0x10]; // 0x150
            source2sdk::client::CModelState m_modelState; // 0x160            
            // metadata: MNotSaved
            bool m_bUseParentRenderBounds; // 0x410            
            bool m_bDisableSolidCollisionsForHierarchy; // 0x411            
            // metadata: MNotSaved
            bool m_bDirtyMotionType; // 0x412            
            // metadata: MNotSaved
            bool m_bIsGeneratingLatchedParentSpaceState; // 0x413            
            uint8_t _pad0414[0x4]; // 0x414
            CUtlStringToken m_materialGroup; // 0x418            
            std::uint8_t m_nHitboxSet; // 0x41c            
            uint8_t _pad041d[0x93];
            
            // Datamap fields:
            // Vector velocity; // 0x7fffffff
            // Vector rotationAxis; // 0x7fffffff
            // float rotationSpeed; // 0x7fffffff
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CSkeletonInstance because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CSkeletonInstance) == 0x4b0);
    };
};
