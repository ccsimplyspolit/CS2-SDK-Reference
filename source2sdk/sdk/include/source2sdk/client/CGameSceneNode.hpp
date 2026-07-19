#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CGameSceneNodeHandle.hpp"
#include "source2sdk/client/CNetworkOriginCellCoordQuantizedVector.hpp"
namespace source2sdk
{
    namespace entity2
    {
        struct CEntityInstance;
    };
};

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
        // Standard-layout class: true
        // Size: 0x130
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CGameSceneNode
        {
        public:
            uint8_t _pad0000[0x10]; // 0x0
            // metadata: MNotSaved
            CTransformWS m_nodeToWorld; // 0x10            
            // metadata: MNotSaved
            source2sdk::entity2::CEntityInstance* m_pOwner; // 0x30            
            // metadata: MNotSaved
            source2sdk::client::CGameSceneNode* m_pParent; // 0x38            
            // metadata: MNotSaved
            source2sdk::client::CGameSceneNode* m_pChild; // 0x40            
            // metadata: MNotSaved
            source2sdk::client::CGameSceneNode* m_pNextSibling; // 0x48            
            uint8_t _pad0050[0x20]; // 0x50
            source2sdk::client::CGameSceneNodeHandle m_hParent; // 0x70            
            source2sdk::client::CNetworkOriginCellCoordQuantizedVector m_vecOrigin; // 0x80            
            uint8_t _pad00b0[0x8]; // 0xb0
            QAngle m_angRotation; // 0xb8            
            float m_flScale; // 0xc4            
            VectorWS m_vecAbsOrigin; // 0xc8            
            QAngle m_angAbsRotation; // 0xd4            
            float m_flAbsScale; // 0xe0            
            // metadata: MNotSaved
            Vector m_vecWrappedLocalOrigin; // 0xe4            
            // metadata: MNotSaved
            QAngle m_angWrappedLocalRotation; // 0xf0            
            // metadata: MNotSaved
            float m_flWrappedScale; // 0xfc            
            // metadata: MNotSaved
            std::int16_t m_nParentAttachmentOrBone; // 0x100            
            // metadata: MNotSaved
            bool m_bDebugAbsOriginChanges; // 0x102            
            bool m_bDormant; // 0x103            
            bool m_bForceParentToBeNetworked; // 0x104            
            // start of bitfield block
            // metadata: MNotSaved
            uint16_t m_bDirtyHierarchy: 1;
            // metadata: MNotSaved
            uint16_t m_bDirtyBoneMergeInfo: 1;
            // metadata: MNotSaved
            uint16_t m_bNetworkedPositionChanged: 1;
            // metadata: MNotSaved
            uint16_t m_bNetworkedAnglesChanged: 1;
            // metadata: MNotSaved
            uint16_t m_bNetworkedScaleChanged: 1;
            // metadata: MNotSaved
            uint16_t m_bWillBeCallingPostDataUpdate: 1;
            // metadata: MNotSaved
            uint16_t m_bBoneMergeFlex: 1;
            // metadata: MNotSaved
            uint16_t m_nLatchAbsOrigin: 2;
            // metadata: MNotSaved
            uint16_t m_bDirtyBoneMergeBoneToRoot: 1;
            // end of bitfield block// 10 bits
            // metadata: MNotSaved
            std::uint8_t m_nHierarchicalDepth; // 0x107            
            // metadata: MNotSaved
            std::uint8_t m_nHierarchyType; // 0x108            
            // metadata: MNotSaved
            std::uint8_t m_nDoNotSetAnimTimeInInvalidatePhysicsCount; // 0x109            
            uint8_t _pad010a[0x2]; // 0x10a
            CUtlStringToken m_name; // 0x10c            
            uint8_t _pad0110[0x10]; // 0x110
            CUtlStringToken m_hierarchyAttachName; // 0x120            
            float m_flClientLocalScale; // 0x124            
            uint8_t _pad0128[0x8];
            
            // Datamap fields:
            // CHandle< CBaseEntity > parentname; // 0x7fffffff
            // bool useLocalOffset; // 0x7fffffff
            // bool useParentRenderBounds; // 0x7fffffff
            // bool positionInLocalSpace; // 0x7fffffff
            // Vector scales; // 0x7fffffff
            // Vector local.scales; // 0x7fffffff
            // float scale; // 0x7fffffff
            // float ModelScale; // 0x7fffffff
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CGameSceneNode, m_nodeToWorld) == 0x10);
        static_assert(offsetof(source2sdk::client::CGameSceneNode, m_pOwner) == 0x30);
        static_assert(offsetof(source2sdk::client::CGameSceneNode, m_pParent) == 0x38);
        static_assert(offsetof(source2sdk::client::CGameSceneNode, m_pChild) == 0x40);
        static_assert(offsetof(source2sdk::client::CGameSceneNode, m_pNextSibling) == 0x48);
        static_assert(offsetof(source2sdk::client::CGameSceneNode, m_hParent) == 0x70);
        static_assert(offsetof(source2sdk::client::CGameSceneNode, m_vecOrigin) == 0x80);
        static_assert(offsetof(source2sdk::client::CGameSceneNode, m_angRotation) == 0xb8);
        static_assert(offsetof(source2sdk::client::CGameSceneNode, m_flScale) == 0xc4);
        static_assert(offsetof(source2sdk::client::CGameSceneNode, m_vecAbsOrigin) == 0xc8);
        static_assert(offsetof(source2sdk::client::CGameSceneNode, m_angAbsRotation) == 0xd4);
        static_assert(offsetof(source2sdk::client::CGameSceneNode, m_flAbsScale) == 0xe0);
        static_assert(offsetof(source2sdk::client::CGameSceneNode, m_vecWrappedLocalOrigin) == 0xe4);
        static_assert(offsetof(source2sdk::client::CGameSceneNode, m_angWrappedLocalRotation) == 0xf0);
        static_assert(offsetof(source2sdk::client::CGameSceneNode, m_flWrappedScale) == 0xfc);
        static_assert(offsetof(source2sdk::client::CGameSceneNode, m_nParentAttachmentOrBone) == 0x100);
        static_assert(offsetof(source2sdk::client::CGameSceneNode, m_bDebugAbsOriginChanges) == 0x102);
        static_assert(offsetof(source2sdk::client::CGameSceneNode, m_bDormant) == 0x103);
        static_assert(offsetof(source2sdk::client::CGameSceneNode, m_bForceParentToBeNetworked) == 0x104);
        // Cannot assert offset of bitfield CGameSceneNode::m_bDirtyHierarchy
        // Cannot assert offset of bitfield CGameSceneNode::m_bDirtyBoneMergeInfo
        // Cannot assert offset of bitfield CGameSceneNode::m_bNetworkedPositionChanged
        // Cannot assert offset of bitfield CGameSceneNode::m_bNetworkedAnglesChanged
        // Cannot assert offset of bitfield CGameSceneNode::m_bNetworkedScaleChanged
        // Cannot assert offset of bitfield CGameSceneNode::m_bWillBeCallingPostDataUpdate
        // Cannot assert offset of bitfield CGameSceneNode::m_bBoneMergeFlex
        // Cannot assert offset of bitfield CGameSceneNode::m_nLatchAbsOrigin
        // Cannot assert offset of bitfield CGameSceneNode::m_bDirtyBoneMergeBoneToRoot
        static_assert(offsetof(source2sdk::client::CGameSceneNode, m_nHierarchicalDepth) == 0x107);
        static_assert(offsetof(source2sdk::client::CGameSceneNode, m_nHierarchyType) == 0x108);
        static_assert(offsetof(source2sdk::client::CGameSceneNode, m_nDoNotSetAnimTimeInInvalidatePhysicsCount) == 0x109);
        static_assert(offsetof(source2sdk::client::CGameSceneNode, m_name) == 0x10c);
        static_assert(offsetof(source2sdk::client::CGameSceneNode, m_hierarchyAttachName) == 0x120);
        static_assert(offsetof(source2sdk::client::CGameSceneNode, m_flClientLocalScale) == 0x124);
        
        static_assert(sizeof(source2sdk::client::CGameSceneNode) == 0x130);
    };
};
