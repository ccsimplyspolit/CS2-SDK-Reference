#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CAnimGraphControllerManager.hpp"
#include "source2sdk/client/CAnimGraphControllerPtr.hpp"
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/server/CBaseModelEntity.hpp"
#include "source2sdk/server/PhysicsRagdollPose_t.hpp"
namespace source2sdk
{
    namespace client
    {
        struct IChoreoServices;
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
        // Size: 0x970
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CBaseAnimGraph : public source2sdk::server::CBaseModelEntity
        {
        public:
            source2sdk::client::CAnimGraphControllerManager m_graphControllerManager; // 0x778            
            source2sdk::client::CAnimGraphControllerPtr m_pMainGraphController; // 0x810            
            bool m_bInitiallyPopulateInterpHistory; // 0x818            
            uint8_t _pad0819[0x7]; // 0x819
            // m_OnLayerCycleUpdated has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEntityOutputTemplate<float> m_OnLayerCycleUpdated;
            char m_OnLayerCycleUpdated[0x20]; // 0x820            
            source2sdk::entity2::CEntityIOOutput m_OnExternalChoreoGraphChanged; // 0x840            
            // metadata: MKV3TransferSaveOpsForField
            source2sdk::client::IChoreoServices* m_pChoreoServices; // 0x858            
            bool m_bAnimGraphUpdateEnabled; // 0x860            
            // metadata: MNotSaved
            bool m_bAnimationUpdateScheduled; // 0x861            
            uint8_t _pad0862[0x2]; // 0x862
            // metadata: MNotSaved
            Vector m_vecForce; // 0x864            
            // metadata: MNotSaved
            std::int32_t m_nForceBone; // 0x870            
            uint8_t _pad0874[0xc]; // 0x874
            // metadata: MPhysPtr
            source2sdk::vphysics2::IPhysicsRagdollControl* m_pRagdollControl; // 0x880            
            source2sdk::server::PhysicsRagdollPose_t m_RagdollPose; // 0x888            
            bool m_bRagdollEnabled; // 0x8b0            
            // metadata: MNotSaved
            bool m_bRagdollClientSide; // 0x8b1            
            uint8_t _pad08b2[0xe]; // 0x8b2
            CTransform m_xParentedRagdollRootInEntitySpace; // 0x8c0            
            uint8_t _pad08e0[0x90];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CBaseAnimGraph because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CBaseAnimGraph) == 0x970);
    };
};
