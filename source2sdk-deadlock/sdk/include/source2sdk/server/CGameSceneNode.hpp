#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CNetworkOriginCellCoordQuantizedVector.hpp"
#include "source2sdk/server/CGameSceneNodeHandle.hpp"
namespace source2sdk
{
    namespace entity2
    {
        struct CEntityInstance;
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
        // Registered alignment: unknown
        // Alignment: unknown
        // Standard-layout class: true
        // Size: 0x120
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "CGameSceneNodeHandle m_hParent"
        // static metadata: MNetworkVarNames "CNetworkOriginCellCoordQuantizedVector m_vecOrigin"
        // static metadata: MNetworkVarNames "QAngle m_angRotation"
        // static metadata: MNetworkVarNames "float m_flScale"
        // static metadata: MNetworkVarNames "CUtlStringToken m_name"
        // static metadata: MNetworkVarNames "CUtlStringToken m_hierarchyAttachName"
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
            source2sdk::server::CGameSceneNode* m_pParent; // 0x38            
            // metadata: MNotSaved
            source2sdk::server::CGameSceneNode* m_pChild; // 0x40            
            // metadata: MNotSaved
            source2sdk::server::CGameSceneNode* m_pNextSibling; // 0x48            
            uint8_t _pad0050[0x20]; // 0x50
            // metadata: MNetworkEnable
            // metadata: MNetworkSerializer "gameSceneNode"
            // metadata: MNetworkChangeCallback "gameSceneNodeHierarchyParentChanged"
            // metadata: MNetworkPriority "32"
            // metadata: MNetworkVarEmbeddedFieldOffsetDelta "8"
            source2sdk::server::CGameSceneNodeHandle m_hParent; // 0x70            
            // metadata: MNetworkEnable
            // metadata: MNetworkPriority "32"
            // metadata: MNetworkUserGroup "Origin"
            // metadata: MNetworkChangeCallback "gameSceneNodeLocalOriginChanged"
            source2sdk::client::CNetworkOriginCellCoordQuantizedVector m_vecOrigin; // 0x80            
            uint8_t _pad00b0[0x8]; // 0xb0
            // metadata: MNetworkEnable
            // metadata: MNetworkPriority "32"
            // metadata: MNetworkSerializer "gameSceneNodeStepSimulationAnglesSerializer"
            // metadata: MNetworkChangeCallback "gameSceneNodeLocalAnglesChanged"
            // metadata: MNetworkEncoder "qangle_precise"
            QAngle m_angRotation; // 0xb8            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "gameSceneNodeLocalScaleChanged"
            // metadata: MNetworkPriority "32"
            float m_flScale; // 0xc4            
            VectorWS m_vecAbsOrigin; // 0xc8            
            QAngle m_angAbsRotation; // 0xd4            
            float m_flAbsScale; // 0xe0            
            // metadata: MNotSaved
            std::int16_t m_nParentAttachmentOrBone; // 0xe4            
            // metadata: MNotSaved
            bool m_bDebugAbsOriginChanges; // 0xe6            
            bool m_bDormant; // 0xe7            
            bool m_bForceParentToBeNetworked; // 0xe8            
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
            std::uint8_t m_nHierarchicalDepth; // 0xeb            
            // metadata: MNotSaved
            std::uint8_t m_nHierarchyType; // 0xec            
            // metadata: MNotSaved
            std::uint8_t m_nDoNotSetAnimTimeInInvalidatePhysicsCount; // 0xed            
            uint8_t _pad00ee[0x2]; // 0xee
            // metadata: MNetworkEnable
            CUtlStringToken m_name; // 0xf0            
            uint8_t _pad00f4[0x10]; // 0xf4
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "gameSceneNodeHierarchyAttachmentChanged"
            CUtlStringToken m_hierarchyAttachName; // 0x104            
            float m_flClientLocalScale; // 0x108            
            Vector m_vRenderOrigin; // 0x10c            
            uint8_t _pad0118[0x8];
            
            // Datamap fields:
            // void m_bDirtyHierarchy; // -0x1
            // void m_bDirtyBoneMergeInfo; // -0x1
            // void m_bNetworkedPositionChanged; // -0x1
            // void m_bNetworkedAnglesChanged; // -0x1
            // void m_bNetworkedScaleChanged; // -0x1
            // void m_bWillBeCallingPostDataUpdate; // -0x1
            // void m_bBoneMergeFlex; // -0x1
            // void m_nLatchAbsOrigin; // -0x1
            // void m_bDirtyBoneMergeBoneToRoot; // -0x1
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
        
        static_assert(offsetof(source2sdk::server::CGameSceneNode, m_nodeToWorld) == 0x10);
        static_assert(offsetof(source2sdk::server::CGameSceneNode, m_pOwner) == 0x30);
        static_assert(offsetof(source2sdk::server::CGameSceneNode, m_pParent) == 0x38);
        static_assert(offsetof(source2sdk::server::CGameSceneNode, m_pChild) == 0x40);
        static_assert(offsetof(source2sdk::server::CGameSceneNode, m_pNextSibling) == 0x48);
        static_assert(offsetof(source2sdk::server::CGameSceneNode, m_hParent) == 0x70);
        static_assert(offsetof(source2sdk::server::CGameSceneNode, m_vecOrigin) == 0x80);
        static_assert(offsetof(source2sdk::server::CGameSceneNode, m_angRotation) == 0xb8);
        static_assert(offsetof(source2sdk::server::CGameSceneNode, m_flScale) == 0xc4);
        static_assert(offsetof(source2sdk::server::CGameSceneNode, m_vecAbsOrigin) == 0xc8);
        static_assert(offsetof(source2sdk::server::CGameSceneNode, m_angAbsRotation) == 0xd4);
        static_assert(offsetof(source2sdk::server::CGameSceneNode, m_flAbsScale) == 0xe0);
        static_assert(offsetof(source2sdk::server::CGameSceneNode, m_nParentAttachmentOrBone) == 0xe4);
        static_assert(offsetof(source2sdk::server::CGameSceneNode, m_bDebugAbsOriginChanges) == 0xe6);
        static_assert(offsetof(source2sdk::server::CGameSceneNode, m_bDormant) == 0xe7);
        static_assert(offsetof(source2sdk::server::CGameSceneNode, m_bForceParentToBeNetworked) == 0xe8);
        // Cannot assert offset of bitfield CGameSceneNode::m_bDirtyHierarchy
        // Cannot assert offset of bitfield CGameSceneNode::m_bDirtyBoneMergeInfo
        // Cannot assert offset of bitfield CGameSceneNode::m_bNetworkedPositionChanged
        // Cannot assert offset of bitfield CGameSceneNode::m_bNetworkedAnglesChanged
        // Cannot assert offset of bitfield CGameSceneNode::m_bNetworkedScaleChanged
        // Cannot assert offset of bitfield CGameSceneNode::m_bWillBeCallingPostDataUpdate
        // Cannot assert offset of bitfield CGameSceneNode::m_bBoneMergeFlex
        // Cannot assert offset of bitfield CGameSceneNode::m_nLatchAbsOrigin
        // Cannot assert offset of bitfield CGameSceneNode::m_bDirtyBoneMergeBoneToRoot
        static_assert(offsetof(source2sdk::server::CGameSceneNode, m_nHierarchicalDepth) == 0xeb);
        static_assert(offsetof(source2sdk::server::CGameSceneNode, m_nHierarchyType) == 0xec);
        static_assert(offsetof(source2sdk::server::CGameSceneNode, m_nDoNotSetAnimTimeInInvalidatePhysicsCount) == 0xed);
        static_assert(offsetof(source2sdk::server::CGameSceneNode, m_name) == 0xf0);
        static_assert(offsetof(source2sdk::server::CGameSceneNode, m_hierarchyAttachName) == 0x104);
        static_assert(offsetof(source2sdk::server::CGameSceneNode, m_flClientLocalScale) == 0x108);
        static_assert(offsetof(source2sdk::server::CGameSceneNode, m_vRenderOrigin) == 0x10c);
        
        static_assert(sizeof(source2sdk::server::CGameSceneNode) == 0x120);
    };
};
