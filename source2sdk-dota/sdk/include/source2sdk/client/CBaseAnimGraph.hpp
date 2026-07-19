#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CAnimGraphControllerManager.hpp"
#include "source2sdk/client/CAnimGraphControllerPtr.hpp"
#include "source2sdk/client/C_BaseModelEntity.hpp"
#include "source2sdk/client/PhysicsRagdollPose_t.hpp"
#include "source2sdk/entity2/CEntityIOOutput.hpp"
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
        // Size: 0xc58
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CBaseAnimGraph : public source2sdk::client::C_BaseModelEntity
        {
        public:
            source2sdk::client::CAnimGraphControllerManager m_graphControllerManager; // 0xa88            
            source2sdk::client::CAnimGraphControllerPtr m_pMainGraphController; // 0xb20            
            bool m_bInitiallyPopulateInterpHistory; // 0xb28            
            uint8_t _pad0b29[0x1]; // 0xb29
            bool m_bSuppressAnimEventSounds; // 0xb2a            
            uint8_t _pad0b2b[0x5]; // 0xb2b
            // m_OnLayerCycleUpdated has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEntityOutputTemplate<float> m_OnLayerCycleUpdated;
            char m_OnLayerCycleUpdated[0x20]; // 0xb30            
            source2sdk::entity2::CEntityIOOutput m_OnExternalChoreoGraphChanged; // 0xb50            
            uint8_t _pad0b68[0x8]; // 0xb68
            bool m_bAnimGraphUpdateEnabled; // 0xb70            
            // metadata: MNotSaved
            bool m_bAnimationUpdateScheduled; // 0xb71            
            uint8_t _pad0b72[0x2]; // 0xb72
            // metadata: MNotSaved
            Vector m_vecForce; // 0xb74            
            // metadata: MNotSaved
            std::int32_t m_nForceBone; // 0xb80            
            uint8_t _pad0b84[0x4]; // 0xb84
            // metadata: MNotSaved
            source2sdk::client::CBaseAnimGraph* m_pClientsideRagdoll; // 0xb88            
            // metadata: MNotSaved
            bool m_bBuiltRagdoll; // 0xb90            
            uint8_t _pad0b91[0xf]; // 0xb91
            // metadata: MPhysPtr
            source2sdk::vphysics2::IPhysicsRagdollControl* m_pRagdollControl; // 0xba0            
            source2sdk::client::PhysicsRagdollPose_t m_RagdollPose; // 0xba8            
            bool m_bRagdollEnabled; // 0xbf0            
            // metadata: MNotSaved
            bool m_bRagdollClientSide; // 0xbf1            
            uint8_t _pad0bf2[0xe]; // 0xbf2
            // metadata: MNotSaved
            bool m_bHasAnimatedMaterialAttributes; // 0xc00            
            uint8_t _pad0c01[0x57];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CBaseAnimGraph because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CBaseAnimGraph) == 0xc58);
    };
};
