#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CAnimGraphControllerManager.hpp"
#include "source2sdk/client/CBaseAnimGraph_ModifierHandleVector_t.hpp"
#include "source2sdk/client/C_BaseModelEntity.hpp"
#include "source2sdk/client/PhysicsRagdollPose_t.hpp"
#include "source2sdk/modellib/AnimTagID.hpp"
namespace source2sdk
{
    namespace client
    {
        struct CAnimGraphControllerBase;
    };
};
namespace source2sdk
{
    namespace vphysics2
    {
        struct IPhysicsRagdollControl;
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
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0xca8
        // Has VTable
        // 
        // static metadata: MNetworkIncludeByName "m_bClientSideRagdoll"
        // static metadata: MNetworkVarNames "bool m_bInitiallyPopulateInterpHistory"
        // static metadata: MNetworkVarNames "bool m_bAnimGraphUpdateEnabled"
        // static metadata: MNetworkVarNames "Vector m_vecForce"
        // static metadata: MNetworkVarNames "int32 m_nForceBone"
        // static metadata: MNetworkVarNames "PhysicsRagdollPose_t m_RagdollPose"
        // static metadata: MNetworkVarNames "bool m_bRagdollEnabled"
        // static metadata: MNetworkVarNames "bool m_bRagdollClientSide"
        #pragma pack(push, 1)
        class CBaseAnimGraph : public source2sdk::client::C_BaseModelEntity
        {
        public:
            // metadata: MSaveOpsForField
            source2sdk::client::CAnimGraphControllerManager m_graphControllerManager; // 0x9a8            
            // metadata: MSaveOpsForField
            source2sdk::client::CAnimGraphControllerBase* m_pMainGraphController; // 0xa58            
            // metadata: MNetworkEnable
            bool m_bInitiallyPopulateInterpHistory; // 0xa60            
            uint8_t _pad0a61[0x1]; // 0xa61
            bool m_bSuppressAnimEventSounds; // 0xa62            
            uint8_t _pad0a63[0xd]; // 0xa63
            // metadata: MNetworkEnable
            bool m_bAnimGraphUpdateEnabled; // 0xa70            
            uint8_t _pad0a71[0x3]; // 0xa71
            float m_flMaxSlopeDistance; // 0xa74            
            // metadata: MNotSaved
            VectorWS m_vLastSlopeCheckPos; // 0xa78            
            std::uint32_t m_nAnimGraphUpdateId; // 0xa84            
            // metadata: MNotSaved
            bool m_bAnimationUpdateScheduled; // 0xa88            
            uint8_t _pad0a89[0x3]; // 0xa89
            // metadata: MNetworkEnable
            // metadata: MNotSaved
            Vector m_vecForce; // 0xa8c            
            // metadata: MNetworkEnable
            // metadata: MNotSaved
            std::int32_t m_nForceBone; // 0xa98            
            uint8_t _pad0a9c[0x4]; // 0xa9c
            // metadata: MNotSaved
            source2sdk::client::CBaseAnimGraph* m_pClientsideRagdoll; // 0xaa0            
            // metadata: MNotSaved
            bool m_bBuiltRagdoll; // 0xaa8            
            uint8_t _pad0aa9[0xf]; // 0xaa9
            // metadata: MPhysPtr
            source2sdk::vphysics2::IPhysicsRagdollControl* m_pRagdollControl; // 0xab8            
            // metadata: MNetworkEnable
            source2sdk::client::PhysicsRagdollPose_t m_RagdollPose; // 0xac0            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnClientRagdollEnabledChanged"
            bool m_bRagdollEnabled; // 0xb08            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnClientRagdollChanged"
            // metadata: MNotSaved
            bool m_bRagdollClientSide; // 0xb09            
            uint8_t _pad0b0a[0xe]; // 0xb0a
            // metadata: MNotSaved
            bool m_bHasAnimatedMaterialAttributes; // 0xb18            
            uint8_t _pad0b19[0x107]; // 0xb19
            // m_bodyGroupModifiers has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlHashtable<source2sdk::modellib::AnimTagID,source2sdk::client::CBaseAnimGraph_ModifierHandleVector_t> m_bodyGroupModifiers;
            char m_bodyGroupModifiers[0x20]; // 0xc20            
            uint8_t _pad0c40[0x68];
            
            // Datamap fields:
            // float InputSetPlaybackRate; // 0x0
            // CUtlSymbolLarge InputSetBodyGroup; // 0x0
            // CUtlSymbolLarge InputSetTargetIdentifierOverride; // 0x0
            // void InputClearTargetIdentifierOverride; // 0x0
            // bool InputDisableAnimEventSounds; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CBaseAnimGraph because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CBaseAnimGraph) == 0xca8);
    };
};
